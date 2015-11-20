/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Controller_DMI_Control_Pkg.h"

void DMI_Controller_reset_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  /* 2 */ HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(&outC->Context_2);
  /* 3 */ StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_3);
  /* 2 */
  FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(&outC->_1_Context_2);
  /* 1 */
  NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
  /* 2 */
  AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_2);
  /* 4 */ D_behavior_reset(&outC->Context_4);
  for (i = 0; i < 4; i++) {
    /* 1 */
    ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_3_Context_1[i]);
  }
  /* 4 */
  TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_4_Context_4);
  /* 7 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_7);
  /* 7 */
  DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_5_Context_7);
  /* CheckDeskStatus */
  CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
    &outC->Context_CheckDeskStatus);
}

/* DMI_Control_Pkg::DMI_Controller */
void DMI_Controller_DMI_Control_Pkg(
  /* DMI_Control_Pkg::DMI_Controller::MousePressed */kcg_bool MousePressed,
  /* DMI_Control_Pkg::DMI_Controller::VisibleGradients */array_bool_12 *VisibleGradients,
  /* DMI_Control_Pkg::DMI_Controller::Brake */kcg_real Brake,
  /* DMI_Control_Pkg::DMI_Controller::keypad_fromDisplay */array_bool_12 *keypad_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::confirmTrainData_fromDisplay */kcg_bool confirmTrainData_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainDataWindow_fromDisplay */kcg_bool openTrainDataWindow_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::startRequest_fromDisplay */kcg_bool startRequest_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataAck_fromDisplay */kcg_bool traindataAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataYesAck_fromDisplay */kcg_bool traindataYesAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataNoAck_fromDisplay */kcg_bool traindataNoAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::textMsgAck_fromDisplay */kcg_bool textMsgAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openDriverID_fromDisplay */kcg_bool openDriverID_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainRN_fromDisplay */kcg_bool openTrainRN_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButton_fromDisplay */kcg_bool closeButton_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButtonMain_fromDisplay */kcg_bool closeButtonMain_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openMainMenu_fromDisplay */kcg_bool openMainMenu_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::TIU_trainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  /* DMI_Control_Pkg::DMI_Controller::brakeStatusSymbolAck_fromDisplay */kcg_bool brakeStatusSymbolAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::C1AreaAck_fromDisplay */kcg_bool C1AreaAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openLevelMenu_fromDisplay */kcg_bool openLevelMenu_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::InputFieldAck_fromDisplay */kcg_bool InputFieldAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::OverD9_fromDisplay */kcg_bool OverD9_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::OverD12_frpmDisplay */kcg_bool OverD12_frpmDisplay,
  /* DMI_Control_Pkg::DMI_Controller::HidePlanningArea_fromDisplay */kcg_bool HidePlanningArea_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::ShowPlanningArea_fromDisplay */kcg_bool ShowPlanningArea_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::EVC_to_DMI */EVC_to_DMI_Message_int_T_API_DMI_Pkg *EVC_to_DMI,
  /* DMI_Control_Pkg::DMI_Controller::ScrollUp_fromDisplay */kcg_bool ScrollUp_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::ScrollDown_fromDisplay */kcg_bool ScrollDown_fromDisplay,
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  struct__31470 tmp;
  kcg_bool tmp16;
  kcg_bool tmp15;
  array_int_4 tmp14;
  array_int_4 tmp13;
  SSM_TR_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive tmp12;
  Icon_group_T_DMI_Types_Pkg tmp11;
  kcg_int tmp10;
  SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu tmp9;
  kcg_bool tmp8;
  kcg_bool tmp7;
  kcg_bool tmp6;
  kcg_bool tmp5;
  kcg_bool tmp4;
  kcg_bool tmp3;
  kcg_bool tmp2;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg tmp1;
  kcg_int i;
  kcg_bool tmp25;
  kcg_bool tmp24;
  kcg_real tmp23;
  kcg_real tmp22;
  kcg_int tmp21;
  kcg_int tmp20;
  array_real_32 tmp19;
  array_real_32 tmp18;
  kcg_real tmp17;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ kcg_bool HandshakeSM_reset_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_sel_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3::AckOn */ kcg_bool AckOn_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::then::_L29 */ array_int_5 _L29_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::then::_L30 */ array_char_30_5 _L30_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::then::_L31 */ array_real_5 _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::then::_L32 */ array_real_5 _L32_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::then::_L33 */ kcg_bool _L33_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L19 */ kcg_bool _L19_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L18 */ array_real_5 _L18_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L17 */ array_real_5 _L17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L16 */ array_char_30_5 _L16_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L15 */ array_int_5 _L15_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L25 */ kcg_int _L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock6::else::then::_L24 */ kcg_int _L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock */ kcg_bool ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpe;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2 */ kcg_bool IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg _40_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else */ kcg_bool _36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else::else::else */ kcg_bool _34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else::else */ kcg_bool _35_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::vPermitted */ kcg_real _80_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::isOrange */ kcg_bool _79_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::_L37 */ kcg_bool _L3778_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInf;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::_L5 */ kcg_bool _L577_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::PointerColor::else */ kcg_bool _38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::PointerColor::else::else */ kcg_bool _37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::isOrange */ kcg_bool _82_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::vPermitted */ kcg_real _81_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::_L13 */ kcg_bool _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool _39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::isOrange */ kcg_bool _83_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::_L2 */ kcg_bool _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else */ kcg_bool _33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else::else */ kcg_bool _29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else::else::then::isRed */ kcg_bool isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else */ kcg_bool _30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::_L2 */ kcg_bool _L284_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::isOrange */ kcg_bool _85_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool _31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg _32_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else */ kcg_bool _41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::_L31 */ kcg_bool _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::isOrange */ kcg_bool _76_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool _48_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::_L55 */ kcg_bool _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::vPermitted */ kcg_real _74_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::isOrange */ kcg_bool _75_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::PointerColor::else::else */ kcg_bool _46_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::PointerColor::else */ kcg_bool _47_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::_L5 */ kcg_bool _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::_L37 */ kcg_bool _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::isOrange */ kcg_bool _72_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::vPermitted */ kcg_real _73_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else::else */ kcg_bool _44_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else::else::else */ kcg_bool _43_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else */ kcg_bool _45_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::vRelease */ kcg_real vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::isYellow */ kcg_bool _71_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::PointerColor::else */ kcg_bool _42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg _49_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::_L36 */ kcg_bool _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isOrange */ kcg_bool _68_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::vIntervention */ kcg_real _69_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isDarkGrey */ kcg_bool _70_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::vPermitted */ kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::IfBlock1::else */ kcg_bool _28_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::_L75 */ kcg_bool _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::_L45 */ kcg_bool _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::vIntervention */ kcg_real _61_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isOrange */ kcg_bool _62_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isWhite */ kcg_bool isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vperm */ kcg_real Vperm63_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isDarkGrey */ kcg_bool _64_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vtarget */ kcg_real _65_Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisi;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vrelease */ kcg_real _66_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isMediumGrey */ kcg_bool _67_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::IfBlock4::else */ kcg_bool _27_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::_L92 */ kcg_bool _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::_L54 */ kcg_bool _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::vIntervention */ kcg_real vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervi;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isYellow */ kcg_bool _57_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vperm */ kcg_real Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isMediumGrey */ kcg_bool _59_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vrelease */ kcg_real _60_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vtarget */ kcg_real Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isDarkGrey */ kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::IfBlock4::else */ kcg_bool _26_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::IfBlock3::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::_L22 */ kcg_bool _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isYellow */ kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::Vperm */ kcg_real Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isMediumGrey */ kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::Vrelease */ kcg_real Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock */ Icon_control_flag_T_DMI_Types_Pkg IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1 */ kcg_bool IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1::else::then::_L2 */ kcg_bool _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1::else::then::CheckResult */ kcg_bool CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFla;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlag;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2 */ Area_group_T_DMI_Types_Pkg WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContr;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2::C::IfBlock1 */ kcg_bool _51_IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconCon;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2::C::IfBlock1::else */ kcg_bool _50_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2 */ Area_group_T_DMI_Types_Pkg _52_WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconC;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock */ kcg_bool AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_Icon;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::else::then::CheckResult */ kcg_bool _87_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::else */ kcg_bool _53_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::then::CheckResult */ kcg_bool _86_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock */ Area_group_T_DMI_Types_Pkg AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_I;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::DriverIDKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID_DriverIDKeyb;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::TrainRNKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboa;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::_L4 */ DMI_Request_T_DMI_Types_Pkg _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::levelMenuVisibility_toDisplay */ kcg_bool levelMenuVisibility_toDisplay_strong;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool _54_br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool _55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool _56_br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow::CatchButtonLevel_IfBlock::then::_L10 */ DMI_level_T_DMI_Types_Pkg _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow_Cat;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow::KeyPressed */ kcg_bool KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::WaitingLevelInformation */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_WaitingLe;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::WaitingLevelInformation */ kcg_bool WaitingLevelInformation_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Mai;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::TrainRNKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::DriverIDKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::LevelWindow::KeyPressed */ kcg_bool KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::LevelWindow::CatchButtonLevel_IfBlock::then::_L10 */ DMI_level_T_DMI_Types_Pkg _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow_CatchButtonLevel_IfBlo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::WaitingForReq */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::WaitingForReq */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */ kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */ kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SelectedLevel */ DMI_level_T_DMI_Types_Pkg last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::DMI_request */ DMI_Request_T_DMI_Types_Pkg last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_c9 */ kcg_int last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_C1 */ kcg_int last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C1 */ kcg_bool last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::dmiCommand_NID_AreaGroup */ Area_group_T_DMI_Types_Pkg last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C9 */ kcg_bool last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */ SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */ SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ kcg_bool TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */ SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */ SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */ SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM3_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::EntryRequestIsValid */ kcg_bool EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconGroupIndex */ kcg_int IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_AreaGroup */ Area_group_T_DMI_Types_Pkg NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_AreaRank */ kcg_int NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_Icon_Rank */ kcg_int NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::DMI_DynamicIsValid */ kcg_bool DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Local_AckMsgQueue */ array__31788 Local_AckMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Localtext_ack_from_Display */ kcg_bool Localtext_ack_from_Display_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::ackMSG_is_empty */ kcg_bool ackMSG_is_empty_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::mm_local_array_ack */ array_real_5 mm_local_array_ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::numAckMsg */ kcg_int numAckMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Local_NormaliMsgQueue */ array__31785 Local_NormaliMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::mm_local_array */ array_real_10 mm_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::numNormalMsg */ kcg_int numNormalMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::hh_local_array */ array_real_10 hh_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::showAck */ kcg_bool showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L221 */ kcg_int _L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L222 */ kcg_int _L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L223 */ kcg_real _L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L224 */ kcg_real _L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L225 */ kcg_int _L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L226 */ kcg_int _L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L227 */ kcg_real _L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L325 */ kcg_bool _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L349 */ kcg_bool _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L354 */ kcg_bool _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L428 */ kcg_bool _L428_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L431 */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L431_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L490 */ kcg_bool _L490_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L507 */ kcg_bool _L507_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L506 */ kcg_bool _L506_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L512 */ array_real_10_2 _L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L511 */ kcg_real _L511_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L510 */ array_real_12 _L510_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L509 */ array_real_12 _L509_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L508 */ array_real_12 _L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L669 */ kcg_bool _L669_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L678 */ kcg_bool _L678_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L859 */ array_real_1 _L859_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L858 */ array_bool_10 _L858_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L857 */ array_int_10 _L857_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L856 */ array_real_10 _L856_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L855 */ array_real_4 _L855_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L854 */ array_real_4 _L854_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L852 */ array_real_12 _L852_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L851 */ array_real_12 _L851_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L850 */ tScale _L850_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L863 */ kcg_bool _L863_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L864 */ array_real_4 _L864_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ kcg_int traindataYesNoIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Level_Data */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg last_DMI_Level_Data;
  /* DMI_Control_Pkg::DMI_Controller::TimeArray */ array_real_4 last_TimeArray;
  /* DMI_Control_Pkg::DMI_Controller::ScrollUpEnableTypeIndex */ kcg_int last_ScrollUpEnableTypeIndex;
  /* DMI_Control_Pkg::DMI_Controller::ScrollDownEnableTypeIndex */ kcg_int last_ScrollDownEnableTypeIndex;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientsValue_toDisplay */ array_real_12 last_D_GradientsValue_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_Scale_toDisplay */ tScale last_D_Scale_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientStartInterpolated_toDisplay */ array_real_12 last_D_GradientStartInterpolated_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientEndInterpolated_toDisplay */ array_real_12 last_D_GradientEndInterpolated_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientVisible_toDisplay */ array_bool_12 last_D_GradientVisible_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_PASP_Distances_toDisplay */ array_real_4 last_D_PASP_Distances_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_PASP_Speeds_toDisplay */ array_real_4 last_D_PASP_Speeds_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_PASP_IndicatorMarker_toDisplay */ array_real_1 last_D_PASP_IndicatorMarker_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangePosition_toDisplay */ array_real_10 last_D_SPDI_SpeedChangePosition_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeIndex_toDisplay */ array_int_10 last_D_SPDI_SpeedChangeIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeSymbolsVisible_toDisplay */ array_bool_10 last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DMI_level_data */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg last_DMI_level_data;
  /* DMI_Control_Pkg::DMI_Controller::IndexLevel_toDisplay */ kcg_int last_IndexLevel_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayLevelIndex_toDisplay */ array_int_12 last_ArrayLevelIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::levelMenuVisibility_toDisplay */ kcg_bool last_levelMenuVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vinterv_Color_toDisplay */ kcg_int last_Vinterv_Color_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::vtarget_permColor_toDisplay */ kcg_int last_vtarget_permColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vinterv_Visibility_toDisplay */ kcg_bool last_Vinterv_Visibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vtarget_permVisibility_toDisplay */ kcg_bool last_Vtarget_permVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VtargetColor_toDisplay */ kcg_int last_VtargetColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VreleaseColor_toDisplay */ kcg_int last_VreleaseColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VpermColor_toDisplay */ kcg_int last_VpermColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::modeSymbolAnnouncementIndex_toDisplay */ kcg_int last_modeSymbolAnnouncementIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::levelSymbolAnnouncementIndex_toDisplay */ kcg_int last_levelSymbolAnnouncementIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::iconGroupIndex_toDisplay */ kcg_int last_iconGroupIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ kcg_int last_traindataYesNoIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::traindataValidWinVisibility_toDisplay */ kcg_bool last_traindataValidWinVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainMaxspeed_toDisplay */ kcg_real last_trainMaxspeed_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainBrakePerc_toDisplay */ kcg_real last_trainBrakePerc_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainLenght_toDisplay */ kcg_real last_trainLenght_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainLoadingGougeIndex_toDisplay */ kcg_int last_trainLoadingGougeIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainAirtightIndex_toDisplay */ kcg_int last_trainAirtightIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainAxleloadIndex_toDisplay */ kcg_int last_trainAxleloadIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainCategoryIndex_toDisplay */ kcg_int last_trainCategoryIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayOfMsgIndex_toDisplay */ array_int_5 last_ArrayOfMsgIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ModeSymbolVisibility_toDisplay */ kcg_bool last_ModeSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ModeSymbol_toDisplay */ kcg_int last_ModeSymbol_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetBarVisibility_toDisplay */ kcg_bool last_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayButtonsEnabler_toDisplay */ array_int_30 last_ArrayButtonsEnabler_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::window_mask_visibility__toDisplay */ array_bool_15 last_window_mask_visibility__toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainRN_Display_toDisplay */ array_int_9 last_TrainRN_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DriverID_Display_toDisplay */ array_int_9 last_DriverID_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::PointerColor_toDisplay */ kcg_int last_PointerColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::StatusSymbolBrake_toDisplay */ kcg_bool last_StatusSymbolBrake_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::InterpolatedDistanceToTarget_toDisplay */ kcg_real last_InterpolatedDistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetVisibilityDigital_toDisplay */ kcg_bool last_DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTarget_toDisplay */ kcg_real last_DistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedIntervention_toDisplay */ kcg_real last_SpeedIntervention_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedRelease_toDisplay */ kcg_real last_SpeedRelease_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedPermitted_toDisplay */ kcg_real last_SpeedPermitted_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedTarget_toDisplay */ kcg_real last_SpeedTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitThree_toDisplay */ kcg_real last_SpeedDigitThree_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitTwo_toDisplay */ kcg_real last_SpeedDigitTwo_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitOne_toDisplay */ kcg_real last_SpeedDigitOne_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainDataWindowVisibility_toDisplay */ kcg_bool last_TrainDataWindowVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainSpeed_toDisplay */ kcg_real last_TrainSpeed_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::LevelSymbolVisibility_toDisplay */ kcg_bool last_LevelSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ETCS_LevelSymbol_toDisplay */ kcg_int last_ETCS_LevelSymbol_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainPosition_toDisplay */ kcg_real last_TrainPosition_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ SSM_ST_CabinSM CabinSM_state_sel;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ SSM_ST_CabinSM CabinSM_state_act;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ kcg_bool CabinSM_reset_act;
  array_int_5 default_IndexFixedMsg_toDisplay;
  array_real_5 default_Array_mm_toDisplay;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_Status;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_Driver_Request;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg default_DMI_Driver_Identifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg default_DMI_Train_Running_Number;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_Text_Message;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_Train_Data_Ack;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Status */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Status;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Identifier */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Driver_Request */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Driver_Request;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Driver_Identifier */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg DMI_Driver_Identifier;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Train_Running_Number */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg DMI_Train_Running_Number;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Text_Message */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Text_Message;
  /* DMI_Control_Pkg::DMI_Controller::DMI_Train_Data_Ack */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Train_Data_Ack;
  /* DMI_Control_Pkg::DMI_Controller::_L72 */ EVC_to_DMI_Message_T_API_DMI_Pkg _L72;
  
  default_DMI_Train_Data_Ack.valid = kcg_false;
  default_DMI_Train_Data_Ack.systemTime = 0;
  default_DMI_Train_Data_Ack.acknowledged = kcg_false;
  default_DMI_Text_Message.valid = kcg_false;
  default_DMI_Text_Message.systemTime = 0;
  default_DMI_Text_Message.textMessage_ID = 0;
  default_DMI_Text_Message.acknowledged = kcg_false;
  default_DMI_Train_Running_Number.valid = kcg_false;
  default_DMI_Train_Running_Number.systemTime = 0;
  default_DMI_Train_Running_Number.trainRunningNumber = 1234;
  default_DMI_Driver_Identifier.valid = kcg_false;
  default_DMI_Driver_Identifier.systemTime = 0;
  default_DMI_Driver_Identifier.driverIdentifier[0] = '1';
  default_DMI_Driver_Identifier.driverIdentifier[1] = '2';
  default_DMI_Driver_Identifier.driverIdentifier[2] = '3';
  default_DMI_Driver_Identifier.driverIdentifier[3] = '4';
  default_DMI_Driver_Identifier.driverIdentifier[4] = '0';
  default_DMI_Driver_Identifier.driverIdentifier[5] = '0';
  default_DMI_Driver_Identifier.driverIdentifier[6] = '0';
  default_DMI_Driver_Identifier.driverIdentifier[7] = '0';
  default_DMI_Driver_Identifier.driverIdentifier[8] = '0';
  default_DMI_Driver_Request.valid = kcg_false;
  default_DMI_Driver_Request.systemTime = 0;
  default_DMI_Driver_Request.m_request = Start_of_mission_DMI_Types_Pkg;
  default_DMI_Status.valid = kcg_false;
  default_DMI_Status.systemTime = 0;
  default_DMI_Status.statusSet = Running_state_DMI_Types_Pkg;
  default_DMI_Status.nAlive = 0;
  default_IndexFixedMsg_toDisplay[0] = 0;
  default_IndexFixedMsg_toDisplay[1] = 0;
  default_IndexFixedMsg_toDisplay[2] = 0;
  default_IndexFixedMsg_toDisplay[3] = 0;
  default_IndexFixedMsg_toDisplay[4] = 0;
  /* CheckDeskStatus */
  CheckDeskStatus_DMI_Control_Pkg_Sub_func(
    TIU_trainStatus,
    &outC->Context_CheckDeskStatus);
  /* 1 */ Write_int_to_EVC_to_DMI_Messages(EVC_to_DMI, &_L72);
  if (outC->init8) {
    CabinSM_state_sel = SSM_st_DeskIsClose_CabinSM;
    outC->_L156 = kcg_false;
    outC->_L170 = kcg_false;
  }
  else {
    CabinSM_state_sel = outC->CabinSM_state_nxt;
    outC->_L156 = (_L72.dynamic.valid & (_L72.dynamic.mode ==
          M_MODE_No_Power)) | (!(_L72.dynamic.valid & (_L72.dynamic.mode !=
            M_MODE_No_Power)) & outC->_L156);
    outC->_L170 = (_L72.dynamic.valid & (_L72.dynamic.mode ==
          M_MODE_No_Power)) | (!(_L72.dynamic.valid & (_L72.dynamic.mode !=
            M_MODE_No_Power)) & outC->_L170);
  }
  tmp25 = outC->Context_CheckDeskStatus.Output1 & outC->_L156;
  tmp24 = outC->Context_CheckDeskStatus.Output2 & outC->_L170;
  switch (CabinSM_state_sel) {
    case SSM_st_DeskIsOpen_CabinSM :
      if (tmp24) {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      CabinSM_reset_act = tmp24;
      break;
    case SSM_st_DeskIsClose_CabinSM :
      if (tmp25) {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      CabinSM_reset_act = tmp25;
      break;
    
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
      }
      else {
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen;
      }
      switch (HandshakeSM_state_sel_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
            _L72.identifierRequest.valid;
          if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          }
          else {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
          }
          HandshakeSM_reset_act_CabinSM_DeskIsOpen =
            br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          HandshakeSM_state_act_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          HandshakeSM_reset_act_CabinSM_DeskIsOpen = kcg_false;
          break;
        
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            _L72.entry_request.valid;
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 6 */
            DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
              &_L72.entry_request,
              &br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_,
              &last_Vtarget_permVisibility_toDisplay,
              &last_Vinterv_Visibility_toDisplay,
              &last_levelMenuVisibility_toDisplay,
              &tmp25);
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init9 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init9 = kcg_true;
        /* 7 */
        DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
          &outC->_5_Context_7);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp25;
            outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_levelMenuVisibility_toDisplay;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_Vinterv_Visibility_toDisplay;
            outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_Vtarget_permVisibility_toDisplay;
          }
          else if (outC->init9) {
            outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            _L72.dynamic.valid;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 7 */
            DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              &outC->_5_Context_7);
          }
          _L669_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            _L72.trackDescription.gradientProfiles.profileChanged;
          if (_L669_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 3 */
            Gradient_from_Track_DMI_Control_Pkg_Sub_func(
              &_L72.trackDescription.gradientProfiles.gradientProfiles,
              &tmp19,
              &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->Gradient_Visible_Flag_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init9) {
            kcg_copy_array_bool_32(
              &outC->Gradient_Visible_Flag_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_bool_32 *)
                &cDMI_Gradient_Visible_Flag_init_DMI_Control_Pkg);
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
          }
          _L678_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            _L72.trackDescription.speedProfiles.profileChanged;
          if (_L678_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 3 */
            Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
              &_L72.trackDescription.speedProfiles.speedProfiles,
              &tmp18,
              &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init9) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_SpeedProfile_Init_DMI_Control_Pkg);
          }
          if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 9 */
            LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
              _L72.dynamic.level.level,
              &tmp24,
              &outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            /* 5 */
            DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
              &_L72.dynamic,
              &tmp23,
              &outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            /* 7 */
            DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              &_L72.dynamic,
              &outC->_5_Context_7);
            tmp22 = outC->_5_Context_7.DistanceToTarget_toDisplay;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_5_Context_7.DistanceToTargetVisibilityDigital_toDisplay;
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_5_Context_7.DistanceToTargetBarVisibility_toDisplay;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_5_Context_7.InterpolatedDistanceToTarget_toDisplay;
            /* 7 */
            RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
              _L72.dynamic.radioConnectionStatus,
              &tmp21,
              &outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            /* 6 */
            ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
              &_L72.dynamic,
              &tmp20,
              &outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            /* 3 */
            DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
              &_L72.dynamic,
              &tmp17,
              &outC->TrainPosition_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init9) {
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 4;
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->TrainPosition_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          break;
        
      }
      break;
    
  }
  if (outC->init8) {
    outC->init8 = kcg_false;
    last_LevelSymbolVisibility_toDisplay = kcg_false;
    last_TrainDataWindowVisibility_toDisplay = kcg_false;
    last_DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
    last_StatusSymbolBrake_toDisplay = kcg_false;
    last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
    last_ModeSymbolVisibility_toDisplay = kcg_false;
    last_traindataValidWinVisibility_toDisplay = kcg_false;
    last_Vtarget_permVisibility_toDisplay = kcg_false;
    last_Vinterv_Visibility_toDisplay = kcg_false;
    last_levelMenuVisibility_toDisplay = kcg_false;
    tmp25 = kcg_false;
    last_ArrayLevelIndex_toDisplay[0] = 0;
    last_ArrayLevelIndex_toDisplay[1] = 0;
    last_ArrayLevelIndex_toDisplay[2] = 0;
    last_ArrayLevelIndex_toDisplay[3] = 0;
    last_ArrayLevelIndex_toDisplay[4] = 0;
    last_ArrayLevelIndex_toDisplay[5] = 0;
    last_ArrayLevelIndex_toDisplay[6] = 0;
    last_ArrayLevelIndex_toDisplay[7] = 0;
    last_ArrayLevelIndex_toDisplay[8] = 0;
    last_ArrayLevelIndex_toDisplay[9] = 0;
    last_ArrayLevelIndex_toDisplay[10] = 0;
    last_ArrayLevelIndex_toDisplay[11] = 0;
    last_D_PASP_IndicatorMarker_toDisplay[0] = 0.0;
    last_TimeArray[0] = 0.0;
    last_TimeArray[1] = 0.0;
    last_TimeArray[2] = 0.0;
    last_TimeArray[3] = 17.0;
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_Level_Data,
      (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMI_Level_data_DMI_Control_Pkg);
    last_ScrollUpEnableTypeIndex = 0;
    last_ScrollDownEnableTypeIndex = 0;
    kcg_copy_array_real_12(
      &last_D_GradientsValue_toDisplay,
      (array_real_12 *) &cD_GradientsValue_DMI_Control_Pkg);
    kcg_copy_tScale(
      &last_D_Scale_toDisplay,
      (tScale *) &cD_tScale_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_D_GradientStartInterpolated_toDisplay,
      (array_real_12 *) &cD_GradientStartInterpolated_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      (array_real_12 *) &cD_GradientStartInterpolated_DMI_Control_Pkg);
    kcg_copy_array_bool_12(
      &last_D_GradientVisible_toDisplay,
      (array_bool_12 *) &cD_GradientVisible_DMI_Control_Pkg);
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      (array_real_4 *) &cD_PASP_Distances_DMI_Control_Pkg);
    kcg_copy_array_real_4(
      &last_D_PASP_Speeds_toDisplay,
      (array_real_4 *) &cD_PASP_Speeds_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_D_SPDI_SpeedChangePosition_toDisplay,
      (array_real_10 *) &cD_SPDI_SpeedChangePosition_DMI_Control_Pkg);
    kcg_copy_array_int_10(
      &last_D_SPDI_SpeedChangeIndex_toDisplay,
      (array_int_10 *) &cD_SPDI_SpeedChangeIndex_DMI_Control_Pkg);
    kcg_copy_array_bool_10(
      &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
      (array_bool_10 *) &cD_SPDI_SpeedChangeSymbolsVisible_DMI_Control_Pkg);
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_level_data,
      (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMI_Level_data_DMI_Control_Pkg);
    last_IndexLevel_toDisplay = 0;
    last_Vinterv_Color_toDisplay = 1;
    last_vtarget_permColor_toDisplay = 1;
    last_VtargetColor_toDisplay = 0;
    last_VreleaseColor_toDisplay = 0;
    last_VpermColor_toDisplay = 0;
    last_modeSymbolAnnouncementIndex_toDisplay = 0;
    last_levelSymbolAnnouncementIndex_toDisplay = 0;
    last_iconGroupIndex_toDisplay = 0;
    last_traindataYesNoIndex_toDisplay = 1;
    last_trainMaxspeed_toDisplay = 0.0;
    last_trainBrakePerc_toDisplay = 0.0;
    last_trainLenght_toDisplay = 0.0;
    last_trainLoadingGougeIndex_toDisplay = 1;
    last_trainAirtightIndex_toDisplay = 1;
    last_trainAxleloadIndex_toDisplay = 1;
    last_trainCategoryIndex_toDisplay = 1;
    last_window_mask_visibility__toDisplay[0] = kcg_false;
    last_window_mask_visibility__toDisplay[1] = kcg_false;
    last_window_mask_visibility__toDisplay[2] = kcg_false;
    last_window_mask_visibility__toDisplay[3] = kcg_false;
    last_window_mask_visibility__toDisplay[4] = kcg_false;
    last_window_mask_visibility__toDisplay[5] = kcg_false;
    last_window_mask_visibility__toDisplay[6] = kcg_false;
    last_window_mask_visibility__toDisplay[7] = kcg_false;
    last_window_mask_visibility__toDisplay[8] = kcg_false;
    last_window_mask_visibility__toDisplay[9] = kcg_false;
    last_window_mask_visibility__toDisplay[10] = kcg_false;
    last_window_mask_visibility__toDisplay[11] = kcg_false;
    last_window_mask_visibility__toDisplay[12] = kcg_false;
    last_window_mask_visibility__toDisplay[13] = kcg_false;
    last_window_mask_visibility__toDisplay[14] = kcg_false;
    last_ArrayButtonsEnabler_toDisplay[0] = 2;
    last_ArrayButtonsEnabler_toDisplay[1] = 2;
    last_ArrayButtonsEnabler_toDisplay[2] = 2;
    last_ArrayButtonsEnabler_toDisplay[3] = 2;
    last_ArrayButtonsEnabler_toDisplay[4] = 2;
    last_ArrayButtonsEnabler_toDisplay[5] = 2;
    last_ArrayButtonsEnabler_toDisplay[6] = 2;
    last_ArrayButtonsEnabler_toDisplay[7] = 2;
    last_ArrayButtonsEnabler_toDisplay[8] = 2;
    last_ArrayButtonsEnabler_toDisplay[9] = 2;
    last_ArrayButtonsEnabler_toDisplay[10] = 0;
    last_ArrayButtonsEnabler_toDisplay[11] = 0;
    last_ArrayButtonsEnabler_toDisplay[12] = 0;
    last_ArrayButtonsEnabler_toDisplay[13] = 0;
    last_ArrayButtonsEnabler_toDisplay[14] = 0;
    last_ArrayButtonsEnabler_toDisplay[15] = 0;
    last_ArrayButtonsEnabler_toDisplay[16] = 0;
    last_ArrayButtonsEnabler_toDisplay[17] = 0;
    last_ArrayButtonsEnabler_toDisplay[18] = 0;
    last_ArrayButtonsEnabler_toDisplay[19] = 0;
    last_ArrayButtonsEnabler_toDisplay[20] = 0;
    last_ArrayButtonsEnabler_toDisplay[21] = 0;
    last_ArrayButtonsEnabler_toDisplay[22] = 0;
    last_ArrayButtonsEnabler_toDisplay[23] = 0;
    last_ArrayButtonsEnabler_toDisplay[24] = 0;
    last_ArrayButtonsEnabler_toDisplay[25] = 0;
    last_ArrayButtonsEnabler_toDisplay[26] = 0;
    last_ArrayButtonsEnabler_toDisplay[27] = 0;
    last_ArrayButtonsEnabler_toDisplay[28] = 0;
    last_ArrayButtonsEnabler_toDisplay[29] = 0;
    kcg_copy_array_int_5(
      &last_ArrayOfMsgIndex_toDisplay,
      &default_IndexFixedMsg_toDisplay);
    last_ModeSymbol_toDisplay = 13;
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    last_PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
    last_InterpolatedDistanceToTarget_toDisplay = 0.0;
    last_DistanceToTarget_toDisplay = 0.0;
    last_SpeedIntervention_toDisplay = 0.0;
    last_SpeedRelease_toDisplay = 0.0;
    last_SpeedPermitted_toDisplay = 0.0;
    last_SpeedTarget_toDisplay = 0.0;
    last_SpeedDigitThree_toDisplay = 0.0;
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_SpeedDigitOne_toDisplay = 0.0;
    last_TrainSpeed_toDisplay = 0.0;
    last_ETCS_LevelSymbol_toDisplay = 4;
    last_TrainPosition_toDisplay = 0.0;
  }
  else {
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_Level_Data,
      &outC->DMI_Level_Data);
    kcg_copy_array_real_4(&last_TimeArray, &outC->TimeArray);
    last_ScrollUpEnableTypeIndex = outC->ScrollUpEnableTypeIndex;
    last_ScrollDownEnableTypeIndex = outC->ScrollDownEnableTypeIndex;
    kcg_copy_array_real_12(
      &last_D_GradientsValue_toDisplay,
      &outC->D_GradientsValue_toDisplay);
    tmp25 = outC->PlanningAreaVisibility_toDisplay;
    kcg_copy_tScale(&last_D_Scale_toDisplay, &outC->D_Scale_toDisplay);
    kcg_copy_array_real_12(
      &last_D_GradientStartInterpolated_toDisplay,
      &outC->D_GradientStartInterpolated_toDisplay);
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      &outC->D_GradientEndInterpolated_toDisplay);
    kcg_copy_array_bool_12(
      &last_D_GradientVisible_toDisplay,
      &outC->D_GradientVisible_toDisplay);
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      &outC->D_PASP_Distances_toDisplay);
    kcg_copy_array_real_4(
      &last_D_PASP_Speeds_toDisplay,
      &outC->D_PASP_Speeds_toDisplay);
    kcg_copy_array_real_1(
      &last_D_PASP_IndicatorMarker_toDisplay,
      &outC->D_PASP_IndicatorMarker_toDisplay);
    kcg_copy_array_real_10(
      &last_D_SPDI_SpeedChangePosition_toDisplay,
      &outC->D_SPDI_SpeedChangePosition_toDisplay);
    kcg_copy_array_int_10(
      &last_D_SPDI_SpeedChangeIndex_toDisplay,
      &outC->D_SPDI_SpeedChangeIndex_toDisplay);
    kcg_copy_array_bool_10(
      &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
      &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_level_data,
      &outC->DMI_level_data);
    last_IndexLevel_toDisplay = outC->IndexLevel_toDisplay;
    kcg_copy_array_int_12(
      &last_ArrayLevelIndex_toDisplay,
      &outC->ArrayLevelIndex_toDisplay);
    last_levelMenuVisibility_toDisplay = outC->levelMenuVisibility_toDisplay;
    last_Vinterv_Color_toDisplay = outC->Vinterv_Color_toDisplay;
    last_vtarget_permColor_toDisplay = outC->vtarget_permColor_toDisplay;
    last_Vinterv_Visibility_toDisplay = outC->Vinterv_Visibility_toDisplay;
    last_Vtarget_permVisibility_toDisplay =
      outC->Vtarget_permVisibility_toDisplay;
    last_VtargetColor_toDisplay = outC->VtargetColor_toDisplay;
    last_VreleaseColor_toDisplay = outC->VreleaseColor_toDisplay;
    last_VpermColor_toDisplay = outC->VpermColor_toDisplay;
    last_modeSymbolAnnouncementIndex_toDisplay =
      outC->modeSymbolAnnouncementIndex_toDisplay;
    last_levelSymbolAnnouncementIndex_toDisplay =
      outC->levelSymbolAnnouncementIndex_toDisplay;
    last_iconGroupIndex_toDisplay = outC->iconGroupIndex_toDisplay;
    last_traindataYesNoIndex_toDisplay = outC->traindataYesNoIndex_toDisplay;
    last_traindataValidWinVisibility_toDisplay =
      outC->traindataValidWinVisibility_toDisplay;
    last_trainMaxspeed_toDisplay = outC->trainMaxspeed_toDisplay;
    last_trainBrakePerc_toDisplay = outC->trainBrakePerc_toDisplay;
    last_trainLenght_toDisplay = outC->trainLenght_toDisplay;
    last_trainLoadingGougeIndex_toDisplay =
      outC->trainLoadingGougeIndex_toDisplay;
    last_trainAirtightIndex_toDisplay = outC->trainAirtightIndex_toDisplay;
    last_trainAxleloadIndex_toDisplay = outC->trainAxleloadIndex_toDisplay;
    last_trainCategoryIndex_toDisplay = outC->trainCategoryIndex_toDisplay;
    kcg_copy_array_int_5(
      &last_ArrayOfMsgIndex_toDisplay,
      &outC->ArrayOfMsgIndex_toDisplay);
    last_ModeSymbolVisibility_toDisplay = outC->ModeSymbolVisibility_toDisplay;
    last_ModeSymbol_toDisplay = outC->ModeSymbol_toDisplay;
    last_DistanceToTargetBarVisibility_toDisplay =
      outC->DistanceToTargetBarVisibility_toDisplay;
    kcg_copy_array_int_30(
      &last_ArrayButtonsEnabler_toDisplay,
      &outC->ArrayButtonsEnabler_toDisplay);
    kcg_copy_array_bool_15(
      &last_window_mask_visibility__toDisplay,
      &outC->window_mask_visibility__toDisplay);
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      &outC->TrainRN_Display_toDisplay);
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      &outC->DriverID_Display_toDisplay);
    last_PointerColor_toDisplay = outC->PointerColor_toDisplay;
    last_StatusSymbolBrake_toDisplay = outC->StatusSymbolBrake_toDisplay;
    last_InterpolatedDistanceToTarget_toDisplay =
      outC->InterpolatedDistanceToTarget_toDisplay;
    last_DistanceToTargetVisibilityDigital_toDisplay =
      outC->DistanceToTargetVisibilityDigital_toDisplay;
    last_DistanceToTarget_toDisplay = outC->DistanceToTarget_toDisplay;
    last_SpeedIntervention_toDisplay = outC->SpeedIntervention_toDisplay;
    last_SpeedRelease_toDisplay = outC->SpeedRelease_toDisplay;
    last_SpeedPermitted_toDisplay = outC->SpeedPermitted_toDisplay;
    last_SpeedTarget_toDisplay = outC->SpeedTarget_toDisplay;
    last_SpeedDigitThree_toDisplay = outC->SpeedDigitThree_toDisplay;
    last_SpeedDigitTwo_toDisplay = outC->SpeedDigitTwo_toDisplay;
    last_SpeedDigitOne_toDisplay = outC->SpeedDigitOne_toDisplay;
    last_TrainDataWindowVisibility_toDisplay =
      outC->TrainDataWindowVisibility_toDisplay;
    last_TrainSpeed_toDisplay = outC->TrainSpeed_toDisplay;
    last_LevelSymbolVisibility_toDisplay =
      outC->LevelSymbolVisibility_toDisplay;
    last_ETCS_LevelSymbol_toDisplay = outC->ETCS_LevelSymbol_toDisplay;
    last_TrainPosition_toDisplay = outC->TrainPosition_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
        &DMI_Status,
        &default_DMI_Status);
      kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
        &DMI_Identifier,
        (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cEmptyIdentifer_DMI_Control_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &DMI_Driver_Request,
        &default_DMI_Driver_Request);
      kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
        &DMI_Driver_Identifier,
        &default_DMI_Driver_Identifier);
      kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
        &DMI_Train_Running_Number,
        &default_DMI_Train_Running_Number);
      kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &DMI_Text_Message,
        &default_DMI_Text_Message);
      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &DMI_Train_Data_Ack,
        &default_DMI_Train_Data_Ack);
      kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_Level_Data,
        &last_DMI_Level_Data);
      outC->isAuxiliarMsg_toDisplay = kcg_true;
      outC->CabinSM_state_nxt = SSM_st_DeskIsClose_CabinSM;
      kcg_copy_array_real_4(&outC->TimeArray, &last_TimeArray);
      outC->ScrollUpEnableTypeIndex = last_ScrollUpEnableTypeIndex;
      outC->ScrollDownEnableTypeIndex = last_ScrollDownEnableTypeIndex;
      kcg_copy_array_real_12(
        &outC->D_GradientsValue_toDisplay,
        &last_D_GradientsValue_toDisplay);
      outC->PlanningAreaVisibility_toDisplay = tmp25;
      kcg_copy_tScale(&outC->D_Scale_toDisplay, &last_D_Scale_toDisplay);
      kcg_copy_array_real_12(
        &outC->D_GradientStartInterpolated_toDisplay,
        &last_D_GradientStartInterpolated_toDisplay);
      kcg_copy_array_real_12(
        &outC->D_GradientEndInterpolated_toDisplay,
        &last_D_GradientEndInterpolated_toDisplay);
      kcg_copy_array_bool_12(
        &outC->D_GradientVisible_toDisplay,
        &last_D_GradientVisible_toDisplay);
      kcg_copy_array_real_4(
        &outC->D_PASP_Distances_toDisplay,
        &last_D_PASP_Distances_toDisplay);
      kcg_copy_array_real_4(
        &outC->D_PASP_Speeds_toDisplay,
        &last_D_PASP_Speeds_toDisplay);
      kcg_copy_array_real_1(
        &outC->D_PASP_IndicatorMarker_toDisplay,
        &last_D_PASP_IndicatorMarker_toDisplay);
      kcg_copy_array_real_10(
        &outC->D_SPDI_SpeedChangePosition_toDisplay,
        &last_D_SPDI_SpeedChangePosition_toDisplay);
      kcg_copy_array_int_10(
        &outC->D_SPDI_SpeedChangeIndex_toDisplay,
        &last_D_SPDI_SpeedChangeIndex_toDisplay);
      kcg_copy_array_bool_10(
        &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
        &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        /* 7 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_7);
      }
      switch (HandshakeSM_state_sel_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          tmp16 = kcg_false;
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
            tmp16 = kcg_true;
          }
          else {
            tmp16 = kcg_false;
          }
          break;
        
      }
      /* 4 */
      Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
        (array_char_12 *) &DMI_name_DMI_Control_Pkg,
        _L72.dynamic.system_clock,
        tmp16,
        &DMI_Identifier);
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &DMI_Status,
            &default_DMI_Status);
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 7 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_7);
          }
          /* 7 */
          DMI_status_DMI_Control_Pkg_Sub_func(
            _L72.dynamic.system_clock,
            &outC->Context_7);
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &DMI_Status,
            &outC->Context_7.StatusOutput);
          if (outC->init9) {
            RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
          }
          else {
            RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
          }
          else if (outC->init9) {
            outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp7 = InputFieldAck_fromDisplay & MousePressed;
              if (tmp7) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              tmp15 = tmp7;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                (closeButtonMain_fromDisplay & MousePressed);
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                else {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                tmp15 =
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                InputFieldAck_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              tmp15 =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq =
                outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq =
                outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                (outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                  EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) |
                (openMainMenu_fromDisplay & MousePressed);
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                tmp15 = kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                else {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                tmp15 =
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
              }
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                InputFieldAck_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              tmp15 =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (tmp15) {
                outC->init6 = kcg_true;
              }
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init6 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init6 = kcg_true;
        /* 4 */
        TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
          &outC->_4_Context_4);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
            &DMI_Driver_Request,
            &default_DMI_Driver_Request);
          kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
            &DMI_Driver_Identifier,
            &default_DMI_Driver_Identifier);
          kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
            &DMI_Train_Running_Number,
            &default_DMI_Train_Running_Number);
          kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &DMI_Text_Message,
            &default_DMI_Text_Message);
          kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &DMI_Train_Data_Ack,
            &default_DMI_Train_Data_Ack);
          kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_Level_Data,
            &last_DMI_Level_Data);
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (outC->init9) {
            last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              Start_of_mission_DMI_Types_Pkg;
            SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
            kcg_copy_DMI_level_T_DMI_Types_Pkg(
              &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (DMI_level_T_DMI_Types_Pkg *) &cDefLevelT_DMI_Control_Pkg);
          }
          else {
            last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            kcg_copy_DMI_level_T_DMI_Types_Pkg(
              &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Driver_Request,
                &default_DMI_Driver_Request);
              tmp16 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (outC->init6) {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
              }
              else {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp16 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    openTrainDataWindow_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    openDriverID_fromDisplay & MousePressed;
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    openTrainRN_fromDisplay & MousePressed;
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    openLevelMenu_fromDisplay & MousePressed;
                  br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    MousePressed & startRequest_fromDisplay;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp16 = kcg_false;
                    _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                      tmp16 = kcg_false;
                      _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                    }
                    else {
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                      if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp16 = kcg_false;
                        _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                          last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                        if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          tmp16 = kcg_true;
                          _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                            Level_entry_request_DMI_Types_Pkg;
                        }
                        else {
                          br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                            br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                          if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                            tmp16 = kcg_true;
                            _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                              Start_of_mission_DMI_Types_Pkg;
                          }
                          else {
                            tmp16 = kcg_false;
                            _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                              last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                        }
                      }
                    }
                  }
                  break;
                
              }
              /* 2 */
              DMI_request_trigger_DMI_Control_Pkg_Sub_func(
                tmp16,
                _L72.dynamic.system_clock,
                _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
                &DMI_Driver_Request);
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp16 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp16 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  tmp16 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  tmp16 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  tmp16 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                    InputFieldAck_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    tmp16 = kcg_false;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                      tmp16 = kcg_true;
                    }
                    else {
                      tmp16 = kcg_false;
                    }
                  }
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp16 = kcg_false;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Driver_Request,
                &default_DMI_Driver_Request);
              tmp16 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Driver_Request,
                &default_DMI_Driver_Request);
              tmp16 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Driver_Request,
                &default_DMI_Driver_Request);
              tmp16 = kcg_false;
              break;
            
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                  kcg_true;
              }
              else {
                br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                  kcg_false;
              }
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                kcg_false;
              break;
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                kcg_false;
              break;
            
          }
          /* 2 */
          Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
            &last_DriverID_Display_toDisplay,
            (kcg_bool)
              (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu |
                tmp16),
            _L72.dynamic.system_clock,
            &DMI_Driver_Identifier);
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp15 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr =
                    InputFieldAck_fromDisplay & MousePressed;
                  if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    tmp15 = kcg_false;
                  }
                  else {
                    br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr;
                    if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                      tmp15 = kcg_true;
                    }
                    else {
                      tmp15 = kcg_false;
                    }
                  }
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  tmp15 = kcg_false;
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                    outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                    EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
                  }
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  tmp15 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp15 = kcg_false;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              break;
            
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp16 = kcg_false;
              if (tmp7) {
                tmp2 = kcg_true;
              }
              else {
                tmp2 = kcg_false;
              }
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp16 = kcg_false;
              tmp2 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                tmp16 = kcg_true;
              }
              else {
                tmp16 = kcg_false;
              }
              tmp2 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp16 = kcg_false;
              tmp2 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp16 = kcg_false;
              tmp2 = kcg_false;
              break;
            
          }
          /* 2 */
          Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
            (kcg_bool) (tmp16 | tmp15),
            &last_TrainRN_Display_toDisplay,
            _L72.dynamic.system_clock,
            &DMI_Train_Running_Number);
          Localtext_ack_from_Display_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            MousePressed & textMsgAck_fromDisplay;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 4 */
            TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
              &outC->_4_Context_4);
          }
          /* 4 */
          TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
            &_L72.textMessage,
            _L72.dynamic.system_clock,
            Localtext_ack_from_Display_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4);
          kcg_copy_array__31788(
            &Local_AckMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4.AckMsgQueue);
          kcg_copy_array__31785(
            &Local_NormaliMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4.MsgQueue);
          numNormalMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->_4_Context_4.NumE;
          ackMSG_is_empty_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->_4_Context_4.AckisEmpty;
          tmp15 = outC->_4_Context_4.isEmpty;
          numAckMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->_4_Context_4.NumAckMsg;
          kcg_copy_array_real_10(
            &hh_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4.hh_array);
          kcg_copy_array_real_10(
            &mm_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4.mm_array);
          kcg_copy_array_real_5(
            &default_Array_mm_toDisplay,
            &outC->_4_Context_4.ack_hh_array);
          kcg_copy_array_real_5(
            &mm_local_array_ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_4_Context_4.ack_mm_array);
          switch (SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                !ackMSG_is_empty_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                tmp16 = kcg_true;
              }
              else {
                tmp16 = kcg_false;
              }
              break;
            case SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              tmp16 = kcg_false;
              break;
            
          }
          if (tmp16) {
            DMI_Text_Message.valid = tmp16;
            DMI_Text_Message.systemTime = _L72.dynamic.system_clock;
            DMI_Text_Message.textMessage_ID = _L72.textMessage.textMessage_ID;
            DMI_Text_Message.acknowledged = kcg_true;
          }
          else {
            kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
              &DMI_Text_Message,
              (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                &cDMI_text_message_ack_DMI_Control_Pkg);
          }
          last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            MousePressed & traindataNoAck_fromDisplay;
          tmp8 = traindataYesAck_fromDisplay & MousePressed;
          switch (YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (tmp8 &
                !last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                !tmp8) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            
          }
          switch (YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              traindataYesNoIndex_toDisplay = 2;
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              traindataYesNoIndex_toDisplay = 1;
              break;
            
          }
          _L428_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            _L72.EVC_levelData.valid;
          if (_L428_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
              &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &_L72.EVC_levelData);
          }
          else if (outC->init9) {
            kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
              &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
                &cDMI_evc_Display_List_DMI_Control_Pkg);
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Train_Data_Ack,
                &default_DMI_Train_Data_Ack);
              tmp6 = kcg_false;
              for (i = 0; i < 12; i++) {
                tmp6 = tmp6 | (*keypad_fromDisplay)[i];
              }
              KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow =
                tmp6 & MousePressed;
              if (KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow) {
                last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                for (i = 0; i < 12; i++) {
                  last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  /* 4 */
                  CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    (*keypad_fromDisplay)[i],
                    &tmp5,
                    &last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  _L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
                    i + 1;
                  if (!tmp5) {
                    break;
                  }
                }
                if ((0 <=
                    _L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 -
                    1) &
                  (_L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 -
                    1 < 32)) {
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow_CatchButtonLevel_IfBlo,
                    &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive.levelList.levelList[_L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 -
                    1]);
                }
                else {
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow_CatchButtonLevel_IfBlo,
                    (DMI_level_T_DMI_Types_Pkg *) &cDefLevelT_DMI_Control_Pkg);
                }
                kcg_copy_DMI_level_T_DMI_Types_Pkg(
                  &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                  &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow_CatchButtonLevel_IfBlo);
              }
              else {
                kcg_copy_DMI_level_T_DMI_Types_Pkg(
                  &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                  &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              }
              tmp16 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind =
                    InputFieldAck_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    tmp16 = kcg_false;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind;
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                      tmp16 = kcg_true;
                    }
                    else {
                      tmp16 = kcg_false;
                    }
                  }
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  tmp16 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS;
                  }
                  tmp16 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                    (traindataYesNoIndex_toDisplay == 1) &
                    traindataAck_fromDisplay & MousePressed;
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                    (traindataYesNoIndex_toDisplay == 2) &
                    traindataAck_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &DMI_Train_Data_Ack,
                      &default_DMI_Train_Data_Ack);
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows;
                  }
                  else {
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                        &DMI_Train_Data_Ack,
                        &default_DMI_Train_Data_Ack);
                    }
                    else {
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
                      if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                        kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                          &DMI_Train_Data_Ack,
                          (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                            &DMI_train_data_ack_positive_DMI_Control_Pkg);
                      }
                      else {
                        br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData =
                          br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData;
                        if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                          kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                            &DMI_Train_Data_Ack,
                            (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                              &DMI_train_data_ack_negative_DMI_Control_Pkg);
                        }
                        else {
                          kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                            &DMI_Train_Data_Ack,
                            &default_DMI_Train_Data_Ack);
                        }
                      }
                    }
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe;
                    }
                  }
                  tmp16 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  _55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train =
                    closeButton_fromDisplay & MousePressed;
                  _56_br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train =
                    confirmTrainData_fromDisplay & MousePressed;
                  if (_55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (_56_br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows;
                  }
                  tmp16 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  }
                  tmp16 = kcg_false;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &DMI_Train_Data_Ack,
                    &default_DMI_Train_Data_Ack);
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  }
                  else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS;
                  }
                  else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  tmp16 = kcg_false;
                  break;
                
              }
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp4 = kcg_false;
                  for (i = 0; i < 12; i++) {
                    tmp4 = tmp4 | (*keypad_fromDisplay)[i];
                  }
                  KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind =
                    tmp4 & MousePressed;
                  if (KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                    _L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
                      0;
                    for (i = 0; i < 12; i++) {
                      tmp10 =
                        _L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
                      /* 2 */
                      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
                        tmp10,
                        (*keypad_fromDisplay)[i],
                        &tmp3,
                        &_L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                        i + 1;
                      if (!tmp3) {
                        break;
                      }
                    }
                    if ((0 <=
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN -
                        1) &
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN -
                        1 < 32)) {
                      kcg_copy_DMI_level_T_DMI_Types_Pkg(
                        &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow_Cat,
                        &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive.levelList.levelList[_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN -
                        1]);
                    }
                    else {
                      kcg_copy_DMI_level_T_DMI_Types_Pkg(
                        &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow_Cat,
                        (DMI_level_T_DMI_Types_Pkg *)
                          &cDefLevelT_DMI_Control_Pkg);
                    }
                    kcg_copy_DMI_level_T_DMI_Types_Pkg(
                      &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                      &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow_Cat);
                  }
                  else {
                    kcg_copy_DMI_level_T_DMI_Types_Pkg(
                      &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                      &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  }
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Train_Data_Ack,
                &default_DMI_Train_Data_Ack);
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp16 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Train_Data_Ack,
                &default_DMI_Train_Data_Ack);
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp16 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &DMI_Train_Data_Ack,
                &default_DMI_Train_Data_Ack);
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp16 = kcg_false;
              break;
            
          }
          /* 4 */
          Set_level_data_DMI_Control_Pkg_Sub_func(
            (kcg_bool) (tmp2 | tmp16),
            _L72.dynamic.system_clock,
            &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L431_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_Level_Data,
            &_L431_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (outC->init9) {
            last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              C_DMI_Types_Pkg;
          }
          else {
            last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        for (i = 0; i < 4; i++) {
          /* 1 */
          ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
            &outC->_3_Context_1[i]);
        }
        /* 4 */ D_behavior_reset(&outC->Context_4);
        /* 2 */
        AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
          &outC->_2_Context_2);
        /* 1 */
        NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
          &outC->Context_1);
        /* 2 */
        FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(&outC->_1_Context_2);
        /* 3 */
        StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_3);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          tmp13[0] = 0;
          tmp13[1] = 0;
          tmp13[2] = 0;
          tmp13[3] = 17;
          tmp14[0] = 100;
          tmp14[1] = 60;
          tmp14[2] = 60;
          tmp14[3] = 24;
          _L863_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->Context_CheckDeskStatus.Output1;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            for (i = 0; i < 4; i++) {
              /* 1 */
              ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
                &outC->_3_Context_1[i]);
            }
            /* 4 */ D_behavior_reset(&outC->Context_4);
            /* 2 */
            AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
              &outC->_2_Context_2);
            /* 1 */
            NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
              &outC->Context_1);
            /* 2 */
            FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
              &outC->_1_Context_2);
            /* 3 */
            StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_3);
          }
          for (i = 0; i < 4; i++) {
            /* 1 */
            ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
              _L863_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              tmp14[i],
              tmp13[i],
              &outC->_3_Context_1[i]);
            _L863_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_3_Context_1[i].rippleclock;
            _L864_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[i] =
              outC->_3_Context_1[i].count;
          }
          if (_L669_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp19);
          }
          else if (outC->init9) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
          }
          if (_L678_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp18);
          }
          else if (outC->init9) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_SpeedProfile_Init_DMI_Control_Pkg);
          }
          if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->PermittedSpeed_CPS_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp17;
            outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp20;
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp21;
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp22;
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp23;
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp24;
          }
          else if (outC->init9) {
            outC->PermittedSpeed_CPS_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              13;
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          /* 3 */
          Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
            outC->TrainPosition_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            outC->PermittedSpeed_CPS_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L510_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L509_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L511_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          /* 4 */
          D_behavior(
            MousePressed,
            OverD9_fromDisplay,
            OverD12_frpmDisplay,
            outC->TrainPosition_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L510_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L509_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L511_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L72.dynamic.distanceIndicationPoint,
            &outC->Context_4);
          kcg_copy_tScale(
            &_L850_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.Scale);
          kcg_copy_array_real_12(
            &_L851_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.GradientStartInterpolated);
          kcg_copy_array_real_12(
            &_L852_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.GradientEndInterpolated);
          kcg_copy_array_real_4(
            &_L854_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.PASP_Distances);
          kcg_copy_array_real_4(
            &_L855_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.PASP_Speeds);
          kcg_copy_array_real_10(
            &_L856_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.SPDI_SpeedChangePosition);
          kcg_copy_array_int_10(
            &_L857_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.SPDI_SpeedChangeIndex);
          kcg_copy_array_bool_10(
            &_L858_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.SPDI_SpeedChangeSymbolsVisible);
          kcg_copy_array_real_1(
            &_L859_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_4.toDisplay);
          switch (SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                SM3_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              }
              else {
                SM3_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              }
              break;
            case SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              SM3_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              break;
            
          }
          switch (SM3_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              outC->SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              break;
            case SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
              showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_true;
              switch (SM3_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                case SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
                  if (br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp12 =
                      SSM_TR_AckOff_1_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  else {
                    tmp12 =
                      SSM_TR_no_trans_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  break;
                case SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 :
                  tmp12 =
                    SSM_TR_no_trans_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                
              }
              AckOn_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3 =
                tmp12 !=
                SSM_TR_no_trans_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (AckOn_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3) {
                outC->SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              }
              else if (ackMSG_is_empty_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                Localtext_ack_from_Display_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              }
              else {
                outC->SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3;
              }
              break;
            
          }
          if (showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 2 */
            AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
              &Local_AckMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              _L72.dynamic.system_clock,
              &default_Array_mm_toDisplay,
              &mm_local_array_ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              numAckMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->_2_Context_2);
            kcg_copy_array_int_5(
              &_L29_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
              &outC->_2_Context_2.IndexFixedMsg);
            kcg_copy_array_char_30_5(
              &_L30_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
              &outC->_2_Context_2.ArrayPlainText);
            kcg_copy_array_real_5(
              &_L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
              &outC->_2_Context_2.Array_hh);
            kcg_copy_array_real_5(
              &_L32_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
              &outC->_2_Context_2.Array_mm);
            _L33_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
              outC->_2_Context_2.FlashingBorderMsg;
          }
          else {
            else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
              !tmp15;
            if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6) {
              /* 1 */
              NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
                &Local_NormaliMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &hh_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &mm_local_array_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                numNormalMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                (kcg_bool) (MousePressed & ScrollUp_fromDisplay),
                (kcg_bool) (MousePressed & ScrollDown_fromDisplay),
                &outC->Context_1);
              kcg_copy_array_int_5(
                &_L15_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
                &outC->Context_1.IndexFixedMsg);
              kcg_copy_array_char_30_5(
                &_L16_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
                &outC->Context_1.ArrayPlainText);
              kcg_copy_array_real_5(
                &_L17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
                &outC->Context_1.Array_hh);
              kcg_copy_array_real_5(
                &_L18_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6,
                &outC->Context_1.Array_mm);
              _L19_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
                outC->Context_1.isImportantMsg;
              _L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
                outC->Context_1.ScrollUpEnableIndex_toDisplay;
              _L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6 =
                outC->Context_1.ScrollDownEnableIndex_toDisplay;
            }
          }
          if (outC->init9) {
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
          }
          else {
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_true;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_true;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                C1AreaAck_fromDisplay & MousePressed;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                brakeStatusSymbolAck_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
              }
              else {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
              }
              break;
            
          }
          switch (IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (_L72.iconRequest.valid) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (_L72.iconRequest.valid |
                _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            
          }
          if (_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
              case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                tmp11 = cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                tmp11 = status_symbols_DMI_Types_Pkg;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                break;
              case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                tmp11 =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                tmp11 = status_symbols_DMI_Types_Pkg;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                break;
              
            }
          }
          else {
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              _L72.iconRequest.DMI_nid_area_group;
            NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              _L72.iconRequest.DMI_nid_area_rank;
            tmp11 = _L72.iconRequest.DMI_nid_icon_group;
            NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              _L72.iconRequest.DMI_nid_icon_rank;
          }
          switch (tmp11) {
            case level_symbol_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cLevelSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case mode_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cModeSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case status_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cStatusSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case order_an_announcements_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            case planning_information_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            case navigation_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            
            default :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV =
                      cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV =
                      cClearC1AreaSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  
                }
              }
              else {
                IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV =
                  _L72.iconRequest.DMI_m_icon_control_flag;
              }
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_I =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_I) {
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case C_DMI_Types_Pkg :
                      AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_Icon =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_Icon) {
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        _86_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro =
                          (IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cStatusSymbol_IconGroup_DMI_Control_Pkg) &
                          (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                        if (_86_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro) {
                          outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            kcg_true;
                          outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L72.iconRequest.DMI_nid_icon_identifier;
                        }
                        else {
                          outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                        outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        _53_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl =
                          NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                          1;
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        if (_53_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                          _87_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro =
                            /* LevelModeSymolsChecker */
                            LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
                              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                          if (_87_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro) {
                            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              kcg_true;
                            outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              _L72.iconRequest.DMI_nid_icon_identifier;
                          }
                          else {
                            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                            outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case clear_area_DMI_Types_Pkg :
                  _52_WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconC =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (_52_WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconC) {
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case C_DMI_Types_Pkg :
                      _51_IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconCon =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      if (_51_IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconCon) {
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          kcg_false;
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        _50_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl =
                          NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                          1;
                        if (_50_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            kcg_false;
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    
                  }
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContr =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContr) {
                    case C_DMI_Types_Pkg :
                      IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                      }
                      else {
                        else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlag =
                          NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                          1;
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlag) {
                          _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlo =
                            kcg_false;
                          for (i = 0; i < 5; i++) {
                            tmp2 =
                              _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlo;
                            /* 1 */
                            CheckElem_iterator_DMI_Control_Pkg_Utils(
                              tmp2,
                              ArrayOfIndex_LevelAnnouncementNoAck_DMI_Control_Pkg[i],
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                              &tmp16,
                              &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlo);
                            if (!tmp16) {
                              break;
                            }
                          }
                          CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFla =
                            (IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                              cLevelSymbol_IconGroup_DMI_Control_Pkg) &
                            _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlo;
                        }
                      }
                      break;
                    
                  }
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                
              }
              break;
            
          }
          /* 2 */
          FlashingIconsOperator_DMI_Control_Pkg_Utils(
            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L72.iconRequest.DMI_m_icon_flashing_freq,
            _L72.dynamic.system_clock,
            _L72.iconRequest.DMI_m_icon_flashing_freq,
            &outC->_1_Context_2);
          _L506_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->_1_Context_2.yellowBorderC1Area_toDisplay;
          _L507_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->_1_Context_2.yellowBorderBrakeSymbol_toDisplay;
          if (outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            tmp10 =
              outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          else {
            tmp10 = 0;
          }
          /* 3 */
          StatusPlanningArea_DMI_Control_Pkg_Sub_func(
            tmp10,
            HidePlanningArea_fromDisplay,
            kcg_true,
            MousePressed,
            &outC->Context_3);
          _L490_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            outC->Context_3.Visibility;
          if (_L428_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 6 */
            LevelListAdapter_DMI_Control_Pkg_Utils(
              &_L72.EVC_levelData,
              &outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init9) {
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[0] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[1] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[2] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[3] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[4] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[5] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[6] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[7] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[8] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[9] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[10] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[11] =
              0;
          }
          switch (SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS :
              if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS :
              IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                _L72.dynamic.mode == M_MODE_Full_Supervision;
              if (IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe =
                  _L72.dynamic.sup_status;
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe) {
                  case CSM_DMI_Types_Pkg :
                    _69_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup =
                      (kcg_real) _L72.dynamic.v_intervention;
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      _69_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio;
                    _68_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      ((_L72.dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (_68_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _28_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    _70_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                      (vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio >=
                        0.0) & (_L72.dynamic.m_warning !=
                        supDis_indication_DMI_Types_Pkg);
                    break;
                  case PIM_DMI_Types_Pkg :
                    _61_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup =
                      (kcg_real) _L72.dynamic.v_intervention;
                    Vperm63_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      _61_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup >
                      Vperm63_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    _62_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      ((_L72.dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (_62_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _27_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      _L72.dynamic.m_warning != supDis_indication_DMI_Types_Pkg;
                    _65_Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisi =
                      (kcg_real) _L72.dynamic.v_target;
                    isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn =
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      (Vperm63_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn >=
                        _65_Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisi);
                    _64_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                      (_65_Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisi >=
                        0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
                    _66_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      (kcg_real) _L72.dynamic.v_release;
                    _67_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe =
                      (_66_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis >=
                        0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
                    break;
                  case TSM_DMI_Types_Pkg :
                    vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervi =
                      (kcg_real) _L72.dynamic.v_intervention;
                    Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervi >
                      Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI =
                      _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      ((_L72.dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio =
                        _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn =
                      (kcg_real) _L72.dynamic.v_target;
                    _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn >=
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    _57_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      (_L72.dynamic.m_warning != supDis_normal_DMI_Types_Pkg);
                    if (_57_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _26_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        (_L72.dynamic.m_warning ==
                          supDis_normal_DMI_Types_Pkg) &
                        _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
                    }
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio =
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn >=
                      0.0;
                    _60_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      (kcg_real) _L72.dynamic.v_release;
                    _59_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe =
                      _60_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis >=
                      0.0;
                    break;
                  case RSM_DMI_Types_Pkg :
                    Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      (supDis_intervention_DMI_Types_Pkg ==
                        _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                        supDis_indication_DMI_Types_Pkg);
                    isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI =
                      _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      (Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo >=
                        (kcg_real) _L72.dynamic.v_target);
                    Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI =
                      (kcg_real) _L72.dynamic.v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      (Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI >=
                        0.0) &
                      _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_;
                    break;
                  
                }
              }
              ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpe =
                (_L72.dynamic.mode == M_MODE_Full_Supervision) |
                (_L72.dynamic.mode == M_MODE_Limited_Supervision) |
                (_L72.dynamic.mode == M_MODE_On_Sight);
              if (ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpe) {
                _49_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed =
                  _L72.dynamic.sup_status;
                switch (_49_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                  case CSM_DMI_Types_Pkg :
                    _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      last_TrainSpeed_toDisplay > (kcg_real)
                        _L72.dynamic.v_permitted;
                    _76_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (_76_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _48_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    _74_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      last_TrainSpeed_toDisplay >
                      _74_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
                    _75_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (_75_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _47_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_47_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      }
                      else {
                        _46_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                          (last_TrainSpeed_toDisplay >= (kcg_real)
                              _L72.dynamic.v_target) &
                          (last_TrainSpeed_toDisplay <=
                            _74_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) &
                          ((supDis_normal_DMI_Types_Pkg ==
                              _L72.dynamic.m_warning) |
                            (_L72.dynamic.m_warning ==
                              supDis_intervention_DMI_Types_Pkg));
                      }
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    _73_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                      (kcg_real) _L72.dynamic.v_permitted;
                    _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M =
                      last_TrainSpeed_toDisplay >
                      _73_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
                    _72_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                      _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                      (last_TrainSpeed_toDisplay >= (kcg_real)
                          _L72.dynamic.v_target) & (last_TrainSpeed_toDisplay <=
                        _73_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv);
                    if (_72_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _45_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_45_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      }
                      else {
                        _44_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                          _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                          (supDis_normal_DMI_Types_Pkg ==
                            _L72.dynamic.m_warning);
                        if (_44_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                        }
                        else {
                          _43_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                            _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                            ((_L72.dynamic.m_warning ==
                                supDis_indication_DMI_Types_Pkg) |
                              (_L72.dynamic.m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                        }
                      }
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI =
                      (kcg_real) _L72.dynamic.v_release;
                    if (vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI !=
                      - 1.0) {
                      _71_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                        (last_TrainSpeed_toDisplay >= 0.0) &
                        (last_TrainSpeed_toDisplay <=
                          vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI) &
                        ((_L72.dynamic.m_warning ==
                            supDis_indication_DMI_Types_Pkg) |
                          (_L72.dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg));
                    }
                    else {
                      _71_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                        kcg_false;
                    }
                    if (_71_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                    }
                    else {
                      _42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        (last_TrainSpeed_toDisplay > (kcg_real)
                            _L72.dynamic.v_permitted) &
                        (_L72.dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    break;
                  
                }
              }
              else {
                _41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                  (_L72.dynamic.mode == M_MODE_Staff_Responsible) |
                  (_L72.dynamic.mode == M_MODE_Unfitted);
                if (_41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                  _40_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed =
                    _L72.dynamic.sup_status;
                  switch (_40_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                    case CSM_DMI_Types_Pkg :
                      _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M =
                        last_TrainSpeed_toDisplay > (kcg_real)
                          _L72.dynamic.v_permitted;
                      _83_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                        _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (_83_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      }
                      else {
                        _39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                          _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_M &
                          (_L72.dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                      }
                      break;
                    case PIM_DMI_Types_Pkg :
                      _81_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        (kcg_real) _L72.dynamic.v_permitted;
                      _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ =
                        last_TrainSpeed_toDisplay >=
                        _81_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
                      _82_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                        _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (_82_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      }
                      else {
                        _38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                          _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ &
                          (_L72.dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (_38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                        }
                        else {
                          _37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                            (last_TrainSpeed_toDisplay >= (kcg_real)
                                _L72.dynamic.v_target) &
                            (last_TrainSpeed_toDisplay <=
                              _81_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) &
                            ((supDis_normal_DMI_Types_Pkg ==
                                _L72.dynamic.m_warning) |
                              (_L72.dynamic.m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                        }
                      }
                      break;
                    case TSM_DMI_Types_Pkg :
                      _80_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        (kcg_real) _L72.dynamic.v_permitted;
                      _L577_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                        last_TrainSpeed_toDisplay >=
                        _80_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv;
                      _79_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                        _L577_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            _L72.dynamic.m_warning) | (_L72.dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      _L3778_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInf =
                        (last_TrainSpeed_toDisplay >= (kcg_real)
                            _L72.dynamic.v_target) &
                        (last_TrainSpeed_toDisplay <=
                          _80_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv);
                      if (_79_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      }
                      else {
                        _36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                          _L577_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo &
                          (_L72.dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (_36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                        }
                        else {
                          _35_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                            _L3778_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInf &
                            (supDis_normal_DMI_Types_Pkg ==
                              _L72.dynamic.m_warning);
                          if (_35_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                          }
                          else {
                            _34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                              _L3778_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInf &
                              ((_L72.dynamic.m_warning ==
                                  supDis_indication_DMI_Types_Pkg) |
                                (_L72.dynamic.m_warning ==
                                  supDis_intervention_DMI_Types_Pkg));
                          }
                        }
                      }
                      break;
                    
                  }
                }
                else {
                  _33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                    (_L72.dynamic.mode == M_MODE_Shunting) |
                    (_L72.dynamic.mode == M_MODE_Reversing);
                  if (_33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                    _32_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed =
                      _L72.dynamic.sup_status;
                    switch (_32_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                      case CSM_DMI_Types_Pkg :
                        _L284_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                          last_TrainSpeed_toDisplay > (kcg_real)
                            _L72.dynamic.v_permitted;
                        _85_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis =
                          _L284_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo &
                          ((supDis_overspeed_DMI_Types_Pkg ==
                              _L72.dynamic.m_warning) |
                            (_L72.dynamic.m_warning ==
                              supDis_warning_DMI_Types_Pkg));
                        if (_85_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                        }
                        else {
                          _31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                            _L284_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo &
                            (_L72.dynamic.m_warning ==
                              supDis_intervention_DMI_Types_Pkg);
                        }
                        break;
                      
                    }
                  }
                  else {
                    _30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                      (_L72.dynamic.mode == M_MODE_Non_Leading) |
                      (_L72.dynamic.mode == M_MODE_Stand_By) |
                      (_L72.dynamic.mode == M_MODE_Post_Trip);
                    if (_30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                    }
                    else {
                      _29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv =
                        (_L72.dynamic.mode == M_MODE_Trip) &
                        DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      if (_29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                        isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                          ((last_TrainSpeed_toDisplay > (kcg_real)
                                _L72.dynamic.v_permitted) &
                            ((_L72.dynamic.sup_status == CSM_DMI_Types_Pkg) |
                              (_L72.dynamic.sup_status == TSM_DMI_Types_Pkg) |
                              (_L72.dynamic.sup_status == PIM_DMI_Types_Pkg))) |
                          ((_L72.dynamic.sup_status == RSM_DMI_Types_Pkg) &
                            (last_TrainSpeed_toDisplay > (kcg_real)
                                _L72.dynamic.v_release));
                      }
                    }
                  }
                }
              }
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS;
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp7 = kcg_false;
              tmp5 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp7 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                    case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp9 =
                          SSM_TR_MainMenu_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp9 =
                          SSM_TR_MainMenu_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp9 =
                          SSM_TR_MainMenu_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp9 =
                          SSM_TR_MainMenu_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp9 =
                          SSM_TR_MainMenu_5_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                        tmp9 =
                          SSM_TR_DriverID_DMI_controlled_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                        tmp9 =
                          SSM_TR_DriverID_DMI_controlled_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                      if (_55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                        tmp9 =
                          SSM_TR_TrainDataWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main;
                      }
                      else if (_56_br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                        tmp9 =
                          SSM_TR_TrainDataWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                        tmp9 =
                          SSM_TR_TrainDataValidationWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                        tmp9 =
                          SSM_TR_TrainDataValidationWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ;
                      }
                      else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                        tmp9 =
                          SSM_TR_TrainDataValidationWindow_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ;
                      }
                      else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                        tmp9 =
                          SSM_TR_TrainDataValidationWindow_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                      if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                        tmp9 =
                          SSM_TR_Insert_TrainRN_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr) {
                        tmp9 =
                          SSM_TR_Insert_TrainRN_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                      tmp9 =
                        SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      break;
                    case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                        tmp9 =
                          SSM_TR_LevelWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                        tmp9 =
                          SSM_TR_LevelWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp9 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    
                  }
                  WaitingLevelInformation_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Mai =
                    tmp9 !=
                    SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  if (WaitingLevelInformation_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Mai) {
                    tmp7 = kcg_false;
                  }
                  else {
                    br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_WaitingLe =
                      _L428_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                    if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_WaitingLe) {
                      tmp7 = kcg_true;
                    }
                    else {
                      tmp7 = kcg_false;
                    }
                  }
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  tmp7 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  tmp7 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  tmp7 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp7 = kcg_false;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp7 = kcg_false;
                  break;
                
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp5 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp5 = kcg_false;
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp5 = kcg_false;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp5 = kcg_true;
                  }
                  else {
                    tmp5 = kcg_false;
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp5 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  tmp5 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  tmp5 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  tmp5 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  tmp5 = kcg_false;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp5 = kcg_false;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp7 = kcg_false;
              tmp5 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp7 = kcg_false;
              tmp5 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp7 = kcg_false;
              tmp5 = kcg_false;
              break;
            
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp8 = kcg_false;
              tmp6 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp8 = kcg_false;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp8 = kcg_true;
              }
              else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp8 = kcg_true;
              }
              else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                tmp8 = kcg_true;
              }
              else {
                tmp8 = kcg_false;
              }
              tmp6 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp8 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                tmp6 = kcg_true;
              }
              else {
                tmp6 = kcg_false;
              }
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                tmp8 = kcg_true;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                tmp8 = kcg_true;
              }
              else {
                tmp8 = kcg_false;
              }
              tmp6 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp8 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                tmp6 = kcg_true;
              }
              else {
                tmp6 = kcg_false;
              }
              break;
            
          }
          _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = tmp8 |
            tmp7;
          _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = tmp6 |
            tmp5;
          switch (HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (_L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (_L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            
          }
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            
          }
          switch (SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                    tmp4 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                    tmp4 = kcg_true;
                  }
                  else {
                    tmp4 = kcg_false;
                  }
                  break;
                case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp4 = kcg_false;
                  break;
                case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp4 = kcg_false;
                  break;
                case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp4 = kcg_false;
                  break;
                
              }
              if (tmp4) {
                SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              }
              else {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                      tmp3 = kcg_true;
                    }
                    else {
                      tmp3 = kcg_false;
                    }
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp3 = kcg_false;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp3 = kcg_false;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp3 = kcg_false;
                    break;
                  
                }
                if (tmp3) {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
                else {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
              }
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            
          }
          switch (YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              break;
            
          }
          switch (TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (_L72.trainData.valid) {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              else {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L72.trainData.valid;
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              break;
            
          }
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->init7 = kcg_true;
              }
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init7 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init7 = kcg_true;
      }
      outC->CabinSM_state_nxt = SSM_st_DeskIsOpen_CabinSM;
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
          outC->isAuxiliarMsg_toDisplay = kcg_true;
          kcg_copy_array_real_4(&outC->TimeArray, &last_TimeArray);
          outC->ScrollUpEnableTypeIndex = last_ScrollUpEnableTypeIndex;
          outC->ScrollDownEnableTypeIndex = last_ScrollDownEnableTypeIndex;
          kcg_copy_array_real_12(
            &outC->D_GradientsValue_toDisplay,
            &last_D_GradientsValue_toDisplay);
          outC->PlanningAreaVisibility_toDisplay = tmp25;
          kcg_copy_tScale(&outC->D_Scale_toDisplay, &last_D_Scale_toDisplay);
          kcg_copy_array_real_12(
            &outC->D_GradientStartInterpolated_toDisplay,
            &last_D_GradientStartInterpolated_toDisplay);
          kcg_copy_array_real_12(
            &outC->D_GradientEndInterpolated_toDisplay,
            &last_D_GradientEndInterpolated_toDisplay);
          kcg_copy_array_bool_12(
            &outC->D_GradientVisible_toDisplay,
            &last_D_GradientVisible_toDisplay);
          kcg_copy_array_real_4(
            &outC->D_PASP_Distances_toDisplay,
            &last_D_PASP_Distances_toDisplay);
          kcg_copy_array_real_4(
            &outC->D_PASP_Speeds_toDisplay,
            &last_D_PASP_Speeds_toDisplay);
          kcg_copy_array_real_1(
            &outC->D_PASP_IndicatorMarker_toDisplay,
            &last_D_PASP_IndicatorMarker_toDisplay);
          kcg_copy_array_real_10(
            &outC->D_SPDI_SpeedChangePosition_toDisplay,
            &last_D_SPDI_SpeedChangePosition_toDisplay);
          kcg_copy_array_int_10(
            &outC->D_SPDI_SpeedChangeIndex_toDisplay,
            &last_D_SPDI_SpeedChangeIndex_toDisplay);
          kcg_copy_array_bool_10(
            &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
            &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp1,
                (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
                  &DMI_train_data_constant_DMI_Control_Pkg);
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (_L72.trainData.valid) {
                kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                  &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues,
                  &_L72.trainData);
              }
              else if (outC->init7) {
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.valid =
                  kcg_false;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.systemTime =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.trainCategory =
                  NC_TRAIN_Passenger_train;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.l_train =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_brakeperct =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.v_maxTrain =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_axleLoad =
                  M_AXLELOADCAT_E5;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_airTight =
                  M_AIRTIGHT_Not_fitted;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_loadingGauge =
                  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
              }
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp1,
                &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues);
              break;
            
          }
          /* 3 */
          TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
            &tmp1,
            &_L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (_L72.menu_request.valid) {
            /* 9 */
            DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest(
              &_L72.menu_request,
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init9) {
            kcg_copy_array_int_30(
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_int_30 *) &AllMenuButtonsDisabled_DMI_Control_Pkg);
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID |
                  (*keypad_fromDisplay)[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                /* 7 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID,
                  keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID ==
                  ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID_DriverIDKeyb =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID !=
                    ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              }
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN |
                  (*keypad_fromDisplay)[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                /* 8 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
                  keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN ==
                  ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboa =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN !=
                    ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              }
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co |
                      (*keypad_fromDisplay)[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co =
                    /* 12 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co,
                      keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co ==
                      ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co) {
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_ =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co !=
                        ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co;
                  }
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN |
                      (*keypad_fromDisplay)[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    /* 13 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                      keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN ==
                      ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN !=
                        ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                  }
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  if (WaitingLevelInformation_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Mai) {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  }
                  else if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_WaitingLe) {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  }
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  if (_55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                  }
                  else {
                    _54_br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train =
                      _56_br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train;
                  }
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  levelMenuVisibility_toDisplay_strong =
                    last_levelMenuVisibility_toDisplay;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                    levelMenuVisibility_toDisplay_strong = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                    levelMenuVisibility_toDisplay_strong = kcg_false;
                  }
                  else {
                    levelMenuVisibility_toDisplay_strong =
                      last_levelMenuVisibility_toDisplay;
                  }
                  break;
                
              }
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              break;
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            
          }
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          kcg_copy_array_real_4(
            &outC->TimeArray,
            &_L864_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_12(
            &outC->D_GradientsValue_toDisplay,
            &_L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          outC->PlanningAreaVisibility_toDisplay =
            _L490_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          kcg_copy_tScale(
            &outC->D_Scale_toDisplay,
            &_L850_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_12(
            &outC->D_GradientStartInterpolated_toDisplay,
            &_L851_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_12(
            &outC->D_GradientEndInterpolated_toDisplay,
            &_L852_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_bool_12(
            &outC->D_GradientVisible_toDisplay,
            (array_bool_12 *)
              &outC->Gradient_Visible_Flag_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[0]);
          kcg_copy_array_real_4(
            &outC->D_PASP_Distances_toDisplay,
            &_L854_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_4(
            &outC->D_PASP_Speeds_toDisplay,
            &_L855_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_1(
            &outC->D_PASP_IndicatorMarker_toDisplay,
            &_L859_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_10(
            &outC->D_SPDI_SpeedChangePosition_toDisplay,
            &_L856_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_int_10(
            &outC->D_SPDI_SpeedChangeIndex_toDisplay,
            &_L857_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_bool_10(
            &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
            &_L858_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->ScrollUpEnableTypeIndex = last_ScrollUpEnableTypeIndex;
            outC->ScrollDownEnableTypeIndex = last_ScrollDownEnableTypeIndex;
            outC->isAuxiliarMsg_toDisplay = kcg_true;
          }
          else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6) {
            outC->ScrollUpEnableTypeIndex =
              _L24_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
            outC->ScrollDownEnableTypeIndex =
              _L25_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
            outC->isAuxiliarMsg_toDisplay =
              _L19_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
          }
          else {
            outC->ScrollUpEnableTypeIndex = last_ScrollUpEnableTypeIndex;
            outC->ScrollDownEnableTypeIndex = last_ScrollDownEnableTypeIndex;
            outC->isAuxiliarMsg_toDisplay = kcg_true;
          }
          break;
        
      }
      break;
    
  }
  tmp.present = DMI_Status.valid | DMI_Identifier.valid |
    DMI_Driver_Request.valid | DMI_Driver_Identifier.valid |
    DMI_Train_Running_Number.valid | DMI_Text_Message.valid |
    DMI_Train_Data_Ack.valid | outC->DMI_Level_Data.valid;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&tmp.status, &DMI_Status);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.identifier,
    &DMI_Identifier);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.driverRequest,
    &DMI_Driver_Request);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &tmp.driverIdentifier,
    &DMI_Driver_Identifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &tmp.trainRunningNumber,
    &DMI_Train_Running_Number);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.radioNetData,
    (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cEmptyDMIRadioNetData_DMI_Control_Pkg);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.textMessageAck,
    &DMI_Text_Message);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.trainDataAck,
    &DMI_Train_Data_Ack);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &tmp.trainData,
    (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainData_DMI_Control_Pkg);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &tmp.adhesionFactor,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData_DMI_Control_Pkg);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.iconAck,
    (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cEmptyDMIIconAck_DMI_Control_Pkg);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &tmp.selectedLevel,
    &outC->DMI_Level_Data);
  /* 1 */ Write_DMI_to_EVC_to_int_Messages(&tmp, &outC->Output83);
  default_Array_mm_toDisplay[0] = - 1.0;
  default_Array_mm_toDisplay[1] = - 1.0;
  default_Array_mm_toDisplay[2] = - 1.0;
  default_Array_mm_toDisplay[3] = - 1.0;
  default_Array_mm_toDisplay[4] = - 1.0;
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->StatusSymbolVisibility_toDisplay = kcg_false;
      outC->yellowBorderMsg_toDisplay = kcg_false;
      outC->openDesk_toDisplay = kcg_false;
      outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
      outC->yellowBorderC1Area_toDisplay = kcg_false;
      outC->hourGlassVisibility_toDisplay = kcg_false;
      kcg_copy_array_real_5(
        &outC->Array_mm_toDisplay,
        &default_Array_mm_toDisplay);
      kcg_copy_array_real_5(
        &outC->Array_hh_toDisplay,
        &default_Array_mm_toDisplay);
      kcg_copy_array_char_30_5(
        &outC->PlainText_toDisplay,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
      kcg_copy_array_int_5(
        &outC->IndexFixedMsg_toDisplay,
        &default_IndexFixedMsg_toDisplay);
      kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_level_data,
        &last_DMI_level_data);
      outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
      kcg_copy_array_int_12(
        &outC->ArrayLevelIndex_toDisplay,
        &last_ArrayLevelIndex_toDisplay);
      outC->levelMenuVisibility_toDisplay = last_levelMenuVisibility_toDisplay;
      outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
      outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
      outC->Vinterv_Visibility_toDisplay = last_Vinterv_Visibility_toDisplay;
      outC->Vtarget_permVisibility_toDisplay =
        last_Vtarget_permVisibility_toDisplay;
      outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
      outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
      outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
      outC->hourGlassCounter_toDisplay = 0.0;
      outC->modeSymbolAnnouncementIndex_toDisplay =
        last_modeSymbolAnnouncementIndex_toDisplay;
      outC->levelSymbolAnnouncementIndex_toDisplay =
        last_levelSymbolAnnouncementIndex_toDisplay;
      outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_icons_ack,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMI_Icons_Ack_DMI_Control_Pkg);
      outC->closeButtonIndex_toDisplay = 26;
      outC->traindataYesNoIndex_toDisplay = last_traindataYesNoIndex_toDisplay;
      outC->traindataValidWinVisibility_toDisplay =
        last_traindataValidWinVisibility_toDisplay;
      outC->trainMaxspeed_toDisplay = last_trainMaxspeed_toDisplay;
      outC->trainBrakePerc_toDisplay = last_trainBrakePerc_toDisplay;
      outC->trainLenght_toDisplay = last_trainLenght_toDisplay;
      outC->trainLoadingGougeIndex_toDisplay =
        last_trainLoadingGougeIndex_toDisplay;
      outC->trainAirtightIndex_toDisplay = last_trainAirtightIndex_toDisplay;
      outC->trainAxleloadIndex_toDisplay = last_trainAxleloadIndex_toDisplay;
      outC->trainCategoryIndex_toDisplay = last_trainCategoryIndex_toDisplay;
      kcg_copy_array_int_5(
        &outC->ArrayOfMsgIndex_toDisplay,
        &last_ArrayOfMsgIndex_toDisplay);
      outC->ModeSymbolVisibility_toDisplay =
        last_ModeSymbolVisibility_toDisplay;
      outC->ModeSymbol_toDisplay = last_ModeSymbol_toDisplay;
      outC->DistanceToTargetBarVisibility_toDisplay =
        last_DistanceToTargetBarVisibility_toDisplay;
      outC->RBC_status_symbol_toDisplay = 4;
      outC->CloseButtonEnabler_toDisplay = 26;
      kcg_copy_array_int_30(
        &outC->ArrayButtonsEnabler_toDisplay,
        &last_ArrayButtonsEnabler_toDisplay);
      kcg_copy_array_bool_15(
        &outC->window_mask_visibility__toDisplay,
        &last_window_mask_visibility__toDisplay);
      kcg_copy_array_int_9(
        &outC->TrainRN_Display_toDisplay,
        &last_TrainRN_Display_toDisplay);
      kcg_copy_array_int_9(
        &outC->DriverID_Display_toDisplay,
        &last_DriverID_Display_toDisplay);
      outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
      outC->StatusSymbolBrake_toDisplay = last_StatusSymbolBrake_toDisplay;
      outC->InterpolatedDistanceToTarget_toDisplay =
        last_InterpolatedDistanceToTarget_toDisplay;
      outC->DistanceToTargetVisibilityDigital_toDisplay =
        last_DistanceToTargetVisibilityDigital_toDisplay;
      outC->DistanceToTarget_toDisplay = last_DistanceToTarget_toDisplay;
      outC->SpeedIntervention_toDisplay = last_SpeedIntervention_toDisplay;
      outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
      outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
      outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
      outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
      outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->SpeedDigitOne_toDisplay = last_SpeedDigitOne_toDisplay;
      outC->TrainDataWindowVisibility_toDisplay =
        last_TrainDataWindowVisibility_toDisplay;
      outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
      outC->LevelSymbolVisibility_toDisplay =
        last_LevelSymbolVisibility_toDisplay;
      outC->ETCS_LevelSymbol_toDisplay = last_ETCS_LevelSymbol_toDisplay;
      outC->TrainPosition_toDisplay = last_TrainPosition_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      outC->init = kcg_false;
      outC->openDesk_toDisplay = kcg_true;
      if (CabinSM_reset_act) {
        /* 2 */
        HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(&outC->Context_2);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->hourGlassVisibility_toDisplay = kcg_false;
          kcg_copy_array_real_5(
            &outC->Array_mm_toDisplay,
            &default_Array_mm_toDisplay);
          kcg_copy_array_real_5(
            &outC->Array_hh_toDisplay,
            &default_Array_mm_toDisplay);
          kcg_copy_array_char_30_5(
            &outC->PlainText_toDisplay,
            (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
          kcg_copy_array_int_5(
            &outC->IndexFixedMsg_toDisplay,
            &default_IndexFixedMsg_toDisplay);
          kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_level_data,
            &last_DMI_level_data);
          outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
          kcg_copy_array_int_12(
            &outC->ArrayLevelIndex_toDisplay,
            &last_ArrayLevelIndex_toDisplay);
          outC->levelMenuVisibility_toDisplay =
            last_levelMenuVisibility_toDisplay;
          outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
          outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
          outC->Vinterv_Visibility_toDisplay =
            last_Vinterv_Visibility_toDisplay;
          outC->Vtarget_permVisibility_toDisplay =
            last_Vtarget_permVisibility_toDisplay;
          outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
          outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
          outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
          outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
          outC->yellowBorderC1Area_toDisplay = kcg_false;
          outC->hourGlassCounter_toDisplay = 0.0;
          outC->modeSymbolAnnouncementIndex_toDisplay =
            last_modeSymbolAnnouncementIndex_toDisplay;
          outC->levelSymbolAnnouncementIndex_toDisplay =
            last_levelSymbolAnnouncementIndex_toDisplay;
          outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
          kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_icons_ack,
            (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
              &cDMI_Icons_Ack_DMI_Control_Pkg);
          outC->StatusSymbolVisibility_toDisplay = kcg_false;
          outC->yellowBorderMsg_toDisplay = kcg_false;
          outC->closeButtonIndex_toDisplay = 26;
          outC->traindataYesNoIndex_toDisplay =
            last_traindataYesNoIndex_toDisplay;
          outC->traindataValidWinVisibility_toDisplay =
            last_traindataValidWinVisibility_toDisplay;
          outC->trainMaxspeed_toDisplay = last_trainMaxspeed_toDisplay;
          outC->trainBrakePerc_toDisplay = last_trainBrakePerc_toDisplay;
          outC->trainLenght_toDisplay = last_trainLenght_toDisplay;
          outC->trainLoadingGougeIndex_toDisplay =
            last_trainLoadingGougeIndex_toDisplay;
          outC->trainAirtightIndex_toDisplay =
            last_trainAirtightIndex_toDisplay;
          outC->trainAxleloadIndex_toDisplay =
            last_trainAxleloadIndex_toDisplay;
          outC->trainCategoryIndex_toDisplay =
            last_trainCategoryIndex_toDisplay;
          kcg_copy_array_int_5(
            &outC->ArrayOfMsgIndex_toDisplay,
            &last_ArrayOfMsgIndex_toDisplay);
          outC->ModeSymbolVisibility_toDisplay =
            last_ModeSymbolVisibility_toDisplay;
          outC->ModeSymbol_toDisplay = last_ModeSymbol_toDisplay;
          outC->DistanceToTargetBarVisibility_toDisplay =
            last_DistanceToTargetBarVisibility_toDisplay;
          outC->RBC_status_symbol_toDisplay = 4;
          outC->CloseButtonEnabler_toDisplay = 26;
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &last_ArrayButtonsEnabler_toDisplay);
          kcg_copy_array_bool_15(
            &outC->window_mask_visibility__toDisplay,
            &last_window_mask_visibility__toDisplay);
          kcg_copy_array_int_9(
            &outC->TrainRN_Display_toDisplay,
            &last_TrainRN_Display_toDisplay);
          kcg_copy_array_int_9(
            &outC->DriverID_Display_toDisplay,
            &last_DriverID_Display_toDisplay);
          outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
          outC->StatusSymbolBrake_toDisplay = last_StatusSymbolBrake_toDisplay;
          outC->InterpolatedDistanceToTarget_toDisplay =
            last_InterpolatedDistanceToTarget_toDisplay;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            last_DistanceToTargetVisibilityDigital_toDisplay;
          outC->DistanceToTarget_toDisplay = last_DistanceToTarget_toDisplay;
          outC->SpeedIntervention_toDisplay = last_SpeedIntervention_toDisplay;
          outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
          outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
          outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
          outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
          outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->SpeedDigitOne_toDisplay = last_SpeedDigitOne_toDisplay;
          outC->TrainDataWindowVisibility_toDisplay =
            last_TrainDataWindowVisibility_toDisplay;
          outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
          outC->LevelSymbolVisibility_toDisplay =
            last_LevelSymbolVisibility_toDisplay;
          outC->ETCS_LevelSymbol_toDisplay = last_ETCS_LevelSymbol_toDisplay;
          outC->TrainPosition_toDisplay = last_TrainPosition_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_level_data,
            &_L431_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_int_12(
            &outC->ArrayLevelIndex_toDisplay,
            &outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_true;
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 2 */
            HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(&outC->Context_2);
          }
          /* 2 */
          HourGlassAnimation_DMI_Control_Pkg_Sub_func(
            _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L72.dynamic.system_clock,
            &outC->Context_2);
          outC->hourGlassCounter_toDisplay = (kcg_real) outC->Context_2.Output1;
          outC->yellowBorderC1Area_toDisplay =
            _L506_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_icons_ack,
                (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                  &cDMI_Icons_Ack_DMI_Control_Pkg);
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 1 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                _L72.dynamic.system_clock,
                outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 2 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                _L72.dynamic.system_clock,
                outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            
          }
          outC->yellowBorderBrakeSymbol_toDisplay =
            _L507_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ArrayOfMsgIndex_toDisplay[0] = 0;
          outC->ArrayOfMsgIndex_toDisplay[1] = 0;
          outC->ArrayOfMsgIndex_toDisplay[2] = 0;
          outC->ArrayOfMsgIndex_toDisplay[3] = 0;
          outC->ArrayOfMsgIndex_toDisplay[4] = 0;
          if (showAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            kcg_copy_array_real_5(
              &outC->Array_mm_toDisplay,
              &_L32_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
            kcg_copy_array_real_5(
              &outC->Array_hh_toDisplay,
              &_L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
            kcg_copy_array_char_30_5(
              &outC->PlainText_toDisplay,
              &_L30_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
            kcg_copy_array_int_5(
              &outC->IndexFixedMsg_toDisplay,
              &_L29_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
            outC->yellowBorderMsg_toDisplay =
              _L33_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6;
          }
          else {
            if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6) {
              kcg_copy_array_real_5(
                &outC->Array_mm_toDisplay,
                &_L18_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
              kcg_copy_array_real_5(
                &outC->Array_hh_toDisplay,
                &_L17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
              kcg_copy_array_char_30_5(
                &outC->PlainText_toDisplay,
                &_L16_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
              kcg_copy_array_int_5(
                &outC->IndexFixedMsg_toDisplay,
                &_L15_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock6);
            }
            else {
              kcg_copy_array_real_5(
                &outC->Array_mm_toDisplay,
                &default_Array_mm_toDisplay);
              kcg_copy_array_real_5(
                &outC->Array_hh_toDisplay,
                &default_Array_mm_toDisplay);
              kcg_copy_array_char_30_5(
                &outC->PlainText_toDisplay,
                (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
              kcg_copy_array_int_5(
                &outC->IndexFixedMsg_toDisplay,
                &default_IndexFixedMsg_toDisplay);
            }
            outC->yellowBorderMsg_toDisplay = kcg_false;
          }
          outC->traindataYesNoIndex_toDisplay = traindataYesNoIndex_toDisplay;
          outC->trainMaxspeed_toDisplay =
            _L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainBrakePerc_toDisplay =
            _L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainLenght_toDisplay =
            _L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive / 100.0;
          outC->trainLoadingGougeIndex_toDisplay =
            _L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainAirtightIndex_toDisplay =
            _L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainAxleloadIndex_toDisplay =
            _L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainCategoryIndex_toDisplay =
            _L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ModeSymbolVisibility_toDisplay =
            outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ModeSymbol_toDisplay =
            outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTargetBarVisibility_toDisplay =
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->RBC_status_symbol_toDisplay =
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->StatusSymbolVisibility_toDisplay =
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->modeSymbolAnnouncementIndex_toDisplay =
                last_modeSymbolAnnouncementIndex_toDisplay;
              outC->levelSymbolAnnouncementIndex_toDisplay =
                last_levelSymbolAnnouncementIndex_toDisplay;
              outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
              outC->StatusSymbolBrake_toDisplay =
                last_StatusSymbolBrake_toDisplay;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketV) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_I) {
                    case H_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_Icon) {
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          last_modeSymbolAnnouncementIndex_toDisplay;
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          last_levelSymbolAnnouncementIndex_toDisplay;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                        if (_86_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro) {
                          outC->StatusSymbolBrake_toDisplay = kcg_true;
                        }
                        else {
                          outC->StatusSymbolBrake_toDisplay =
                            last_StatusSymbolBrake_toDisplay;
                        }
                      }
                      else {
                        if (_53_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                          if (_87_CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContro) {
                            outC->modeSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                            outC->levelSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                            outC->iconGroupIndex_toDisplay =
                              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                          else {
                            outC->modeSymbolAnnouncementIndex_toDisplay =
                              last_modeSymbolAnnouncementIndex_toDisplay;
                            outC->levelSymbolAnnouncementIndex_toDisplay =
                              last_levelSymbolAnnouncementIndex_toDisplay;
                            outC->iconGroupIndex_toDisplay =
                              last_iconGroupIndex_toDisplay;
                          }
                        }
                        else {
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            last_modeSymbolAnnouncementIndex_toDisplay;
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            last_levelSymbolAnnouncementIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->modeSymbolAnnouncementIndex_toDisplay =
                    last_modeSymbolAnnouncementIndex_toDisplay;
                  outC->levelSymbolAnnouncementIndex_toDisplay =
                    last_levelSymbolAnnouncementIndex_toDisplay;
                  outC->iconGroupIndex_toDisplay =
                    last_iconGroupIndex_toDisplay;
                  outC->StatusSymbolBrake_toDisplay =
                    last_StatusSymbolBrake_toDisplay;
                  break;
                case clear_area_DMI_Types_Pkg :
                  switch (_52_WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconC) {
                    case H_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (_51_IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconCon) {
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          last_modeSymbolAnnouncementIndex_toDisplay;
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          last_levelSymbolAnnouncementIndex_toDisplay;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                        outC->StatusSymbolBrake_toDisplay =
                          !((IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                              3) &
                            (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                              cSTATUS_Emergency_brake_DMI_Control_Pkg));
                      }
                      else {
                        if (_50_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                          outC->modeSymbolAnnouncementIndex_toDisplay = 0;
                          outC->levelSymbolAnnouncementIndex_toDisplay = 0;
                          outC->iconGroupIndex_toDisplay = 0;
                        }
                        else {
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            last_modeSymbolAnnouncementIndex_toDisplay;
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            last_levelSymbolAnnouncementIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconContr) {
                    case H_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControl) {
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          last_modeSymbolAnnouncementIndex_toDisplay;
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          last_levelSymbolAnnouncementIndex_toDisplay;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                        outC->StatusSymbolBrake_toDisplay =
                          (IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            3) &
                          (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                      }
                      else {
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlag) {
                          if (CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFla) {
                            outC->modeSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                            outC->levelSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                            outC->iconGroupIndex_toDisplay =
                              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                          else {
                            outC->modeSymbolAnnouncementIndex_toDisplay =
                              last_modeSymbolAnnouncementIndex_toDisplay;
                            outC->levelSymbolAnnouncementIndex_toDisplay =
                              last_levelSymbolAnnouncementIndex_toDisplay;
                            outC->iconGroupIndex_toDisplay =
                              last_iconGroupIndex_toDisplay;
                          }
                        }
                        else {
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            last_modeSymbolAnnouncementIndex_toDisplay;
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            last_levelSymbolAnnouncementIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                
              }
              break;
            
          }
          outC->InterpolatedDistanceToTarget_toDisplay =
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTarget_toDisplay =
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
              outC->vtarget_permColor_toDisplay =
                last_vtarget_permColor_toDisplay;
              outC->Vinterv_Visibility_toDisplay =
                last_Vinterv_Visibility_toDisplay;
              outC->Vtarget_permVisibility_toDisplay =
                last_Vtarget_permVisibility_toDisplay;
              outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
              outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
              outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
              outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
              outC->SpeedIntervention_toDisplay =
                last_SpeedIntervention_toDisplay;
              outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
              outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
              outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
              break;
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS :
              if (ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpe) {
                switch (_49_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                  case CSM_DMI_Types_Pkg :
                    if (_76_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_48_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    if (_75_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_47_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_46_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (_72_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_45_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_44_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else if (_43_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    if (_71_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else if (_42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
                    break;
                  
                }
              }
              else if (_41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                switch (_40_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                  case CSM_DMI_Types_Pkg :
                    if (_83_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    if (_82_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (_79_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_35_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else if (_34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  
                }
              }
              else if (_33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                switch (_32_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeed) {
                  case CSM_DMI_Types_Pkg :
                    if (_85_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case TSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  
                }
              }
              else if (_30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
              }
              else if (_29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                if (isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                  outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                }
                else {
                  outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                }
              }
              else {
                outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
              }
              if (IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe) {
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    outC->Vinterv_Visibility_toDisplay =
                      last_Vinterv_Visibility_toDisplay;
                    outC->Vtarget_permVisibility_toDisplay =
                      last_Vtarget_permVisibility_toDisplay;
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    outC->VreleaseColor_toDisplay =
                      last_VreleaseColor_toDisplay;
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    outC->SpeedIntervention_toDisplay =
                      last_SpeedIntervention_toDisplay;
                    outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
                    outC->SpeedPermitted_toDisplay =
                      last_SpeedPermitted_toDisplay;
                    outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->Vinterv_Visibility_toDisplay = kcg_false;
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    outC->SpeedIntervention_toDisplay = 0.0;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                      outC->SpeedRelease_toDisplay =
                        Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI) {
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->SpeedPermitted_toDisplay =
                        Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
                    }
                    else {
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
                    break;
                  case TSM_DMI_Types_Pkg :
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionI) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervi;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervi;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    if (_59_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                      outC->SpeedRelease_toDisplay =
                        _60_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (_57_isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->SpeedPermitted_toDisplay =
                        Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    }
                    else if (_26_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->vtarget_permColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->SpeedPermitted_toDisplay =
                        Vperm58_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    }
                    else {
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                      outC->SpeedTarget_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_VtargetColor_toDisplay;
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    if (_62_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        _61_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
                    }
                    else if (_27_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        _61_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    if (_67_isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupe) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                      outC->SpeedRelease_toDisplay =
                        _66_Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->SpeedPermitted_toDisplay =
                        Vperm63_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionIn;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->SpeedPermitted_toDisplay =
                        last_SpeedPermitted_toDisplay;
                    }
                    if (_64_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                      outC->SpeedTarget_toDisplay =
                        _65_Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisi;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_VtargetColor_toDisplay;
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    break;
                  case CSM_DMI_Types_Pkg :
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    outC->VreleaseColor_toDisplay =
                      last_VreleaseColor_toDisplay;
                    if (_68_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervis) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        _69_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
                    }
                    else if (_28_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->SpeedIntervention_toDisplay =
                        _69_vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSup;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    outC->SpeedRelease_toDisplay = 0.0;
                    if (_70_isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSuperv) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->VpermColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                      outC->SpeedPermitted_toDisplay =
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisio;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay =
                        last_Vtarget_permVisibility_toDisplay;
                      outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    outC->SpeedTarget_toDisplay = 0.0;
                    break;
                  
                }
              }
              else {
                outC->Vtarget_permVisibility_toDisplay = kcg_false;
                outC->Vinterv_Visibility_toDisplay = kcg_false;
                outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
                outC->vtarget_permColor_toDisplay =
                  last_vtarget_permColor_toDisplay;
                outC->VtargetColor_toDisplay = 0;
                outC->VreleaseColor_toDisplay = 0;
                outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                outC->SpeedIntervention_toDisplay = 0.0;
                outC->SpeedRelease_toDisplay = 0.0;
                outC->SpeedPermitted_toDisplay = 0.0;
                outC->SpeedTarget_toDisplay = 0.0;
              }
              break;
            
          }
          outC->SpeedDigitThree_toDisplay =
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->SpeedDigitTwo_toDisplay =
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->SpeedDigitOne_toDisplay =
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->TrainSpeed_toDisplay =
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->LevelSymbolVisibility_toDisplay =
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ETCS_LevelSymbol_toDisplay =
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->TrainPosition_toDisplay = 0.0;
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow) {
                outC->IndexLevel_toDisplay = /* 3 */
                  LevelAdapter_DMI_Control_Pkg_Utils(
                    &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow_CatchButtonLevel_IfBlo);
              }
              else {
                outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
              }
              outC->levelMenuVisibility_toDisplay = kcg_true;
              outC->closeButtonIndex_toDisplay =
                closeButtonActiveSymbol_DMI_Control_Pkg;
              outC->traindataValidWinVisibility_toDisplay =
                last_traindataValidWinVisibility_toDisplay;
              outC->CloseButtonEnabler_toDisplay = 26;
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &cETCS_Level_Menu_mask_DMI_Control_Pkg);
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->CloseButtonEnabler_toDisplay =
                cCloseButtonEnabledSymbol_DMI_Control_Pkg;
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (KeyPressed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWind) {
                    outC->IndexLevel_toDisplay = /* 1 */
                      LevelAdapter_DMI_Control_Pkg_Utils(
                        &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow_Cat);
                  }
                  else {
                    outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  }
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  if (WaitingLevelInformation_weakb_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Mai) {
                    outC->levelMenuVisibility_toDisplay =
                      levelMenuVisibility_toDisplay_strong;
                  }
                  else if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_WaitingLe) {
                    outC->levelMenuVisibility_toDisplay = kcg_true;
                  }
                  else {
                    outC->levelMenuVisibility_toDisplay =
                      levelMenuVisibility_toDisplay_strong;
                  }
                  outC->closeButtonIndex_toDisplay = 26;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    /* 19 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_TrainRN_Display_toDisplay,
                      &outC->TrainRN_Display_toDisplay);
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_Tr) {
                    /* 18 */
                    AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_TrainRN_Display_toDisplay,
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                      &outC->TrainRN_Display_toDisplay);
                  }
                  else {
                    kcg_copy_array_int_9(
                      &outC->TrainRN_Display_toDisplay,
                      &last_TrainRN_Display_toDisplay);
                  }
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay = 26;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay = 26;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co) {
                    /* 18 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_DriverID_Display_toDisplay,
                      &outC->DriverID_Display_toDisplay);
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_) {
                    /* 17 */
                    AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_DriverID_Display_toDisplay,
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_co,
                      &outC->DriverID_Display_toDisplay);
                  }
                  else {
                    kcg_copy_array_int_9(
                      &outC->DriverID_Display_toDisplay,
                      &last_DriverID_Display_toDisplay);
                  }
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  outC->closeButtonIndex_toDisplay = 26;
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS :
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainData) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else {
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows :
                  if (_55_br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (_54_br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Train) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_true;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else {
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu :
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else {
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                
              }
              outC->init6 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
              outC->levelMenuVisibility_toDisplay =
                last_levelMenuVisibility_toDisplay;
              outC->closeButtonIndex_toDisplay = 26;
              outC->traindataValidWinVisibility_toDisplay =
                last_traindataValidWinVisibility_toDisplay;
              outC->CloseButtonEnabler_toDisplay = 26;
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                /* 16 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_TrainRN_Display_toDisplay,
                  &outC->TrainRN_Display_toDisplay);
              }
              else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboa) {
                /* 15 */
                AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_TrainRN_Display_toDisplay,
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
                  &outC->TrainRN_Display_toDisplay);
              }
              else {
                kcg_copy_array_int_9(
                  &outC->TrainRN_Display_toDisplay,
                  &last_TrainRN_Display_toDisplay);
              }
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
              outC->levelMenuVisibility_toDisplay = kcg_false;
              outC->closeButtonIndex_toDisplay = 26;
              outC->traindataValidWinVisibility_toDisplay = kcg_false;
              outC->CloseButtonEnabler_toDisplay = 26;
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &HideMainmenu_window_mask_DMI_Control_Pkg);
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              outC->TrainDataWindowVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = last_IndexLevel_toDisplay;
              outC->levelMenuVisibility_toDisplay =
                last_levelMenuVisibility_toDisplay;
              outC->closeButtonIndex_toDisplay = 26;
              outC->traindataValidWinVisibility_toDisplay =
                last_traindataValidWinVisibility_toDisplay;
              outC->CloseButtonEnabler_toDisplay = 26;
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                /* 15 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_DriverID_Display_toDisplay,
                  &outC->DriverID_Display_toDisplay);
              }
              else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID_DriverIDKeyb) {
                /* 14 */
                AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_DriverID_Display_toDisplay,
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID,
                  &outC->DriverID_Display_toDisplay);
              }
              else {
                kcg_copy_array_int_9(
                  &outC->DriverID_Display_toDisplay,
                  &last_DriverID_Display_toDisplay);
              }
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            
          }
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->init7 = kcg_false;
              break;
            
          }
          outC->init9 = kcg_false;
          break;
        
      }
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Controller_DMI_Control_Pkg.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */


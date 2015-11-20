/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTextMessages_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::manageTextMessages */
void manageTextMessages_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::manageTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::manageTextMessages::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_TextMessages_Pkg::manageTextMessages::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevelTransition */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_textMessage,
  /* manage_TextMessages_Pkg::manageTextMessages::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList)
{
  /* manage_TextMessages_Pkg::manageTextMessages */
  static kcg_bool op_call;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _2_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _1_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L18 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L18_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L17 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L17_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L16 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L16_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L14 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L14_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L13 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L13_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L12 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L12_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L11 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L11_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L10 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L10_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L9 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L9_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L7 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L7_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L6 */
  static M_MODE _L6_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::then::_L1 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L1_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _10_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _9_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::else::then::_L2 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::else::then::_L1 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L122_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _8_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _7_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::else::else::_L3 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L3_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::else::else::_L2 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L223_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _3_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _4_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L4 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L4_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L5 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L5_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L6 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L621_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L7 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L720_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L8 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L8_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L9 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L919_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L10 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L1018_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L11 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L1117_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L13 */
  static kcg_bool _L1316_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L14 */
  static Q_TEXTCONFIRM _L1415_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L15 */
  static Q_TEXTCONFIRM _L15_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L16 */
  static Q_TEXTCONFIRM _L1614_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L17 */
  static M_LEVEL _L1713_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1::else::then::_L18 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L1812_IfBlock1;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _5_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _6_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages */
  static kcg_bool ck_every;
  /* manage_TextMessages_Pkg::manageTextMessages::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::manageTextMessages::textMessageToSend */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _25_textMessageToSend;
  /* manage_TextMessages_Pkg::manageTextMessages::levelNeedsAck */
  static kcg_bool levelNeedsAck;
  /* manage_TextMessages_Pkg::manageTextMessages::modeChange */
  static kcg_bool modeChange;
  /* manage_TextMessages_Pkg::manageTextMessages::msgContext */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _24_msgContext;
  /* manage_TextMessages_Pkg::manageTextMessages::q_textReport */
  static Q_TEXTREPORT q_textReport;
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevel */
  static M_LEVEL announcedLevel;
  /* manage_TextMessages_Pkg::manageTextMessages::_L6 */
  static kcg_bool _L6;
  /* manage_TextMessages_Pkg::manageTextMessages::_L7 */
  static kcg_bool _L7;
  /* manage_TextMessages_Pkg::manageTextMessages::_L8 */
  static kcg_bool _L8;
  /* manage_TextMessages_Pkg::manageTextMessages::_L9 */
  static kcg_bool _L9;
  /* manage_TextMessages_Pkg::manageTextMessages::_L13 */
  static kcg_bool _L13;
  /* manage_TextMessages_Pkg::manageTextMessages::_L17 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* manage_TextMessages_Pkg::manageTextMessages::_L15 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L15;
  /* manage_TextMessages_Pkg::manageTextMessages::_L16 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L16;
  /* manage_TextMessages_Pkg::manageTextMessages::_L14 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L14;
  /* manage_TextMessages_Pkg::manageTextMessages::_L18 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L18;
  /* manage_TextMessages_Pkg::manageTextMessages::_L20 */
  static kcg_int _L20;
  /* manage_TextMessages_Pkg::manageTextMessages::_L22 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L22;
  /* manage_TextMessages_Pkg::manageTextMessages::_L24 */
  static M_MODE _L24;
  /* manage_TextMessages_Pkg::manageTextMessages::_L26 */
  static Q_TEXTREPORT _L26;
  /* manage_TextMessages_Pkg::manageTextMessages::_L28 */
  static Q_TEXTREPORT _L28;
  /* manage_TextMessages_Pkg::manageTextMessages::_L29 */
  static kcg_bool _L29;
  /* manage_TextMessages_Pkg::manageTextMessages::_L34 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L34;
  /* manage_TextMessages_Pkg::manageTextMessages::_L37 */
  static kcg_bool _L37;
  /* manage_TextMessages_Pkg::manageTextMessages::_L38 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L38;
  /* manage_TextMessages_Pkg::manageTextMessages::_L40 */
  static M_LEVEL _L40;
  /* manage_TextMessages_Pkg::manageTextMessages::_L42 */
  static T_AnnouncedLevel_Level_And_Mode_Types_Pkg _L42;
  /* manage_TextMessages_Pkg::manageTextMessages::_L43 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L43;
  /* manage_TextMessages_Pkg::manageTextMessages::_L44 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L44;
  /* manage_TextMessages_Pkg::manageTextMessages::_L45 */
  static M_LEVEL _L45;
  /* manage_TextMessages_Pkg::manageTextMessages::_L46 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L46;
  /* manage_TextMessages_Pkg::manageTextMessages::_L47 */
  static M_LEVEL _L47;
  
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L38,
    inModeLevel_Ack);
  _L6 = _L38.valid;
  ck_every = _L6;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &_L42,
    announcedLevelTransition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L43,
    &_L42.LevelTransition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L44,
    &_L43.transition);
  _L45 = _L44.level;
  announcedLevel = _L45;
  _L40 = announcedLevel;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L34, inStatusList);
  /* ck_manageTextMessages */ if (ck_every) {
    op_call = /* 1 */ checkIfNeeded_manage_TextMessages_Pkg(&_L38, _L40, &_L34);
  }
  _L7 = _L38.LevelNeedsAck;
  /* ck_manageTextMessages */ if (ck_every) {
    _L29 = op_call;
  }
  else {
    _L29 = kcg_false;
  }
  _L8 = _L7 & _L29;
  levelNeedsAck = _L8;
  _L37 = levelNeedsAck;
  _L13 = !_L37;
  _L9 = _L29 & _L13;
  modeChange = _L9;
  _L17 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L14, inStatusList);
  IfBlock1_clock = modeChange;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
      &_L18_IfBlock1,
      inModeLevel_Ack);
    _L6_IfBlock1 = _L18_IfBlock1.whichMode;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L7_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SR_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L9_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_OS_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L10_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SH_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L11_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_LS_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L12_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SN_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L13_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_UN_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L17_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_TR_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L14_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultText_manage_DMI_Output_Pkg);
    switch (_L6_IfBlock1) {
      case M_MODE_Staff_Responsible :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L7_IfBlock1);
        break;
      case M_MODE_On_Sight :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L9_IfBlock1);
        break;
      case M_MODE_Shunting :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L10_IfBlock1);
        break;
      case M_MODE_Limited_Supervision :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L11_IfBlock1);
        break;
      case M_MODE_National_System :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L12_IfBlock1);
        break;
      case M_MODE_Unfitted :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L13_IfBlock1);
        break;
      case M_MODE_Trip :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L17_IfBlock1);
        break;
      
      default :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L1_IfBlock1,
          &_L14_IfBlock1);
    }
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_textMessageToSend,
      &_L1_IfBlock1);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_25_textMessageToSend,
      &_1_textMessageToSend);
  }
  else {
    _11_else_clock_IfBlock1 = levelNeedsAck;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L1713_IfBlock1 = announcedLevel;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L5_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_0_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L621_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_1_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L720_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_2_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L8_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_3_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L919_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_NTC_manage_TextMessages_Pkg);
      switch (_L1713_IfBlock1) {
        case M_LEVEL_Level_0 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &_L4_IfBlock1,
            &_L5_IfBlock1);
          break;
        case M_LEVEL_Level_1 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &_L4_IfBlock1,
            &_L621_IfBlock1);
          break;
        case M_LEVEL_Level_2 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &_L4_IfBlock1,
            &_L720_IfBlock1);
          break;
        case M_LEVEL_Level_3 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &_L4_IfBlock1,
            &_L8_IfBlock1);
          break;
        case M_LEVEL_Level_NTC_specified_by_NID_NTC :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &_L4_IfBlock1,
            &_L919_IfBlock1);
          break;
        
      }
      kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
        &_L1812_IfBlock1,
        inModeLevel_Ack);
      _L1316_IfBlock1 = _L1812_IfBlock1.LevelNeedsAck;
      _L15_IfBlock1 = Q_TEXTCONFIRM_Confirmation_required;
      _L1614_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
      /* 1 */ if (_L1316_IfBlock1) {
        _L1415_IfBlock1 = _L15_IfBlock1;
      }
      else {
        _L1415_IfBlock1 = _L1614_IfBlock1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L1117_IfBlock1,
        &_L4_IfBlock1);
      if (kcg_true) {
        _L1117_IfBlock1.q_textConfirm = _L1415_IfBlock1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_5_textMessageToSend,
        &_L1117_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &textMessageToSend,
        &_5_textMessageToSend);
    }
    else {
      else_clock_IfBlock1 = dmi_FromBG;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L122_IfBlock1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cTextSpecial_BG_manage_DMI_Output_Pkg);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_9_textMessageToSend,
          &_L122_IfBlock1);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_3_textMessageToSend,
          &_9_textMessageToSend);
      }
      else {
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_L223_IfBlock1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cDefaultText_manage_DMI_Output_Pkg);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_7_textMessageToSend,
          &_L223_IfBlock1);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_3_textMessageToSend,
          &_7_textMessageToSend);
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &textMessageToSend,
        &_3_textMessageToSend);
    }
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_25_textMessageToSend,
      &textMessageToSend);
  }
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L18,
    &_25_textMessageToSend);
  _L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  q_textReport = _L28;
  _L26 = q_textReport;
  _L20 = 111;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L16_IfBlock1 = con_modeChange_DMI_Types_Pkg;
    _2_msgContext = _L16_IfBlock1;
    _24_msgContext = _2_msgContext;
  }
  else {
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L1018_IfBlock1 = con_levelMgmt_DMI_Types_Pkg;
      _6_msgContext = _L1018_IfBlock1;
      msgContext = _6_msgContext;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L2_IfBlock1 = con_trackRequest_DMI_Types_Pkg;
        _10_msgContext = _L2_IfBlock1;
        _4_msgContext = _10_msgContext;
      }
      else {
        _L3_IfBlock1 = con_undefined_DMI_Types_Pkg;
        _8_msgContext = _L3_IfBlock1;
        _4_msgContext = _8_msgContext;
      }
      msgContext = _4_msgContext;
    }
    _24_msgContext = msgContext;
  }
  _L22 = _24_msgContext;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L46,
    inModeLevel_Ack);
  _L24 = _L46.whichMode;
  _L47 = announcedLevel;
  /* 2 */
  sendTextMessage_manage_TextMessages_Pkg(
    _L17,
    &_L14,
    &_L18,
    _L26,
    _L20,
    _L22,
    _L24,
    _L47,
    &_L15,
    &_L16);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(outStatusList, &_L15);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_textMessage,
    &_L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTextMessages_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


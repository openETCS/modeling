/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTextMessage_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::sendTextMessage */
void sendTextMessage_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::sendTextMessage::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::sendTextMessage::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::intextMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *intextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inTextReport */ Q_TEXTREPORT inTextReport,
  /* manage_TextMessages_Pkg::sendTextMessage::inNID_TextMessage */ NID_TEXTMESSAGE inNID_TextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inContext */ DMI_context_TXT_MSG_T_DMI_Types_Pkg inContext,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichMode */ M_MODE inWhichMode,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichLevel */ M_LEVEL inWhichLevel,
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *_13_outStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *_12_dmi_textMessage)
{
  /* manage_TextMessages_Pkg::sendTextMessage::myElement */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _3_myElement;
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _2_dmi_textMessage;
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _1_outStatusList;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L23 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L23_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L22 */
  static M_LEVEL _L22_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L21 */
  static M_MODE _L21_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L13 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L13_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L12 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L12_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L11 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L11_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L10 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L10_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L9 */
  static NID_TEXTMESSAGE _L9_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L8 */
  static Q_TEXTREPORT _L8_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L5 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L5_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L4 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L4_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::then::_L2 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::myElement */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg myElement;
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg dmi_textMessage;
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::else::else::_L2 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L210_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::else::else::_L3 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L39_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _4_outStatusList;
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _5_dmi_textMessage;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::else::then::_L2 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L28_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1::else::then::_L1 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L1_IfBlock1;
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _6_outStatusList;
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _7_dmi_textMessage;
  /* manage_TextMessages_Pkg::sendTextMessage::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::sendTextMessage::needsStore */
  static kcg_bool needsStore;
  /* manage_TextMessages_Pkg::sendTextMessage::isValid */
  static kcg_bool isValid;
  /* manage_TextMessages_Pkg::sendTextMessage::myElement */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _11_myElement;
  /* manage_TextMessages_Pkg::sendTextMessage::_L2 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L2;
  /* manage_TextMessages_Pkg::sendTextMessage::_L3 */
  static Q_TEXTCONFIRM _L3;
  /* manage_TextMessages_Pkg::sendTextMessage::_L4 */
  static Q_TEXTCONFIRM _L4;
  /* manage_TextMessages_Pkg::sendTextMessage::_L5 */
  static kcg_bool _L5;
  /* manage_TextMessages_Pkg::sendTextMessage::_L6 */
  static kcg_bool _L6;
  /* manage_TextMessages_Pkg::sendTextMessage::_L7 */
  static kcg_bool _L7;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L2, intextMessage);
  _L3 = _L2.q_textConfirm;
  _L4 = Q_TEXTCONFIRM_No_confirmation_required;
  _L5 = _L4 != _L3;
  _L6 = _L2.valid;
  _L7 = _L5 & _L6;
  needsStore = _L7;
  IfBlock1_clock = needsStore;
  isValid = _L6;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L12_IfBlock1,
      inStatusList);
    _L3_IfBlock1 = kcg_true;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L4_IfBlock1,
      intextMessage);
    _L5_IfBlock1 = _L4_IfBlock1.textMessage_ID;
    _L7_IfBlock1 = inSystemTime;
    _L8_IfBlock1 = inTextReport;
    _L23_IfBlock1 = inContext;
    _L9_IfBlock1 = inNID_TextMessage;
    _L22_IfBlock1 = inWhichLevel;
    _L21_IfBlock1 = inWhichMode;
    _L2_IfBlock1.valid = _L3_IfBlock1;
    _L2_IfBlock1.dmi_textMessageID = _L5_IfBlock1;
    _L2_IfBlock1.timeStamp = _L7_IfBlock1;
    _L2_IfBlock1.textReport = _L8_IfBlock1;
    _L2_IfBlock1.context = _L23_IfBlock1;
    _L2_IfBlock1.nid_textmessage = _L9_IfBlock1;
    _L2_IfBlock1.whichLevel = _L22_IfBlock1;
    _L2_IfBlock1.whichMode = _L21_IfBlock1;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_3_myElement, &_L2_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L11_IfBlock1, &_3_myElement);
    /* 1 */
    saveStatus_manage_TextMessages_Pkg(
      &_L12_IfBlock1,
      &_L11_IfBlock1,
      &_L10_IfBlock1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_1_outStatusList,
      &_L10_IfBlock1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      _13_outStatusList,
      &_1_outStatusList);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L13_IfBlock1,
      intextMessage);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_2_dmi_textMessage,
      &_L13_IfBlock1);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      _12_dmi_textMessage,
      &_2_dmi_textMessage);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_11_myElement, &_3_myElement);
  }
  else {
    else_clock_IfBlock1 = isValid;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_L1_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_6_outStatusList,
        &_L1_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outStatusList,
        &_6_outStatusList);
    }
    else {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_L210_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_4_outStatusList,
        &_L210_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outStatusList,
        &_4_outStatusList);
    }
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      _13_outStatusList,
      &outStatusList);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L28_IfBlock1,
        intextMessage);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_7_dmi_textMessage,
        &_L28_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &dmi_textMessage,
        &_7_dmi_textMessage);
    }
    else {
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L39_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cDefaultText_manage_DMI_Output_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_5_dmi_textMessage,
        &_L39_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &dmi_textMessage,
        &_5_dmi_textMessage);
    }
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      _12_dmi_textMessage,
      &dmi_textMessage);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &myElement,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_11_myElement, &myElement);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendTextMessage_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


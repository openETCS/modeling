/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveTextMessageAck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::receiveTextMessageAck */
void receiveTextMessageAck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inTXT_MsgAck */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *inTXT_MsgAck,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *_21_outStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */ DMI_To_Modes_T_DMI_Types_Pkg *outML20)
{
  /* manage_TextMessages_Pkg::receiveTextMessageAck::context */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _4_context;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::indexToInfo */
  static kcg_int _3_indexToInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::msgInfo */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _2_msgInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _1_outStatusList;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L10 */
  static kcg_bool _L10_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L11 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L11_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L12 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L12_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L13 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L13_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L14 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L14_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L6 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L6_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L7 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L7_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L8 */
  static kcg_int _L8_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L9 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L9_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L1 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L1_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L3 */
  static kcg_int _L3_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L2 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L2_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L4 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L4_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L5 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L5_IfBlock2;
  static kcg_int _8_noname;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::context */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::indexToInfo */
  static kcg_int indexToInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::msgInfo */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg msgInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::else::_L5 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L59_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::else::_L2 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L210_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::else::_L1 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L111_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */
  static DMI_To_Modes_T_DMI_Types_Pkg outML5;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L6 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L6_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L5 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L5_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L3 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L3_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::then::_L2 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */
  static DMI_To_Modes_T_DMI_Types_Pkg outML;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::else::_L1 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L116_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */
  static DMI_To_Modes_T_DMI_Types_Pkg outML6;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L5 */
  static kcg_bool _L515_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L3 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L314_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L2 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L213_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L1 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L1_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L7 */
  static DMI_DriverAck_T_DMI_Types_Pkg _L712_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L10 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L10_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L11 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L11_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else::then::_L12 */
  static M_MODE _L12_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */
  static DMI_To_Modes_T_DMI_Types_Pkg outML7;
  static T_internal_Type_Obu_BasicTypes_Pkg noname;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  static kcg_int default_indexToInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::msgInfo */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _19_msgInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::indexToInfo */
  static kcg_int _18_indexToInfo;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::context */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _17_context;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::isValid */
  static kcg_bool isValid;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::_L24 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L24;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::_L25 */
  static kcg_bool _L25;
  
  default_indexToInfo = - 1;
  _L5 = inSystemTime;
  noname = _L5;
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L24,
    inTXT_MsgAck);
  _L25 = _L24.valid;
  isValid = _L25;
  IfBlock2_clock = isValid;
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L7_IfBlock2,
      inStatusList);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_L9_IfBlock2,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L1_IfBlock2,
      inTXT_MsgAck);
    _L4_IfBlock2 = _L1_IfBlock2.textMessage_ID;
    _3_indexToInfo = _L4_IfBlock2;
    _L8_IfBlock2 = _3_indexToInfo;
    if ((0 <= _L8_IfBlock2) & (_L8_IfBlock2 < 31)) {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &_L6_IfBlock2,
        &_L7_IfBlock2[_L8_IfBlock2]);
    }
    else {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L6_IfBlock2, &_L9_IfBlock2);
    }
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_2_msgInfo, &_L6_IfBlock2);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L11_IfBlock2, &_2_msgInfo);
    _L10_IfBlock2 = _L11_IfBlock2.valid;
    _L14_IfBlock2 = _L11_IfBlock2.context;
    _L12_IfBlock2 = con_undefined_DMI_Types_Pkg;
    /* 2 */ if (_L10_IfBlock2) {
      _L13_IfBlock2 = _L14_IfBlock2;
    }
    else {
      _L13_IfBlock2 = _L12_IfBlock2;
    }
    _4_context = _L13_IfBlock2;
    _17_context = _4_context;
  }
  else {
    _L59_IfBlock2 = con_undefined_DMI_Types_Pkg;
    context = _L59_IfBlock2;
    _17_context = context;
  }
  IfBlock1_clock = _17_context == con_levelMgmt_DMI_Types_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = _17_context == con_modeChange_DMI_Types_Pkg;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &_L314_IfBlock1,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
      _L515_IfBlock1 = kcg_true;
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L1_IfBlock1, &_L314_IfBlock1);
      if (kcg_true) {
        _L1_IfBlock1.valid = _L515_IfBlock1;
      }
      _L8_IfBlock1 = kcg_true;
    }
    else {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &_L116_IfBlock1,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML6, &_L116_IfBlock1);
    }
  }
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_19_msgInfo, &_2_msgInfo);
  }
  else {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_L210_IfBlock2,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&msgInfo, &_L210_IfBlock2);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_19_msgInfo, &msgInfo);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &_L2_IfBlock1,
      (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
    _L4_IfBlock1 = kcg_true;
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L3_IfBlock1, &_L2_IfBlock1);
    if (kcg_true) {
      _L3_IfBlock1.valid = _L4_IfBlock1;
    }
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L6_IfBlock1,
      inTXT_MsgAck);
    _L7_IfBlock1 = _L6_IfBlock1.acknowledged;
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L5_IfBlock1, &_L3_IfBlock1);
    if (kcg_true) {
      _L5_IfBlock1.LevelAck = _L7_IfBlock1;
    }
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML5, &_L5_IfBlock1);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(outML20, &outML5);
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&_L11_IfBlock1, &_19_msgInfo);
      _L12_IfBlock1 = _L11_IfBlock1.whichMode;
      kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L10_IfBlock1,
        inTXT_MsgAck);
      _L9_IfBlock1 = _L10_IfBlock1.acknowledged;
      _L712_IfBlock1.valid = _L8_IfBlock1;
      _L712_IfBlock1.whichMode = _L12_IfBlock1;
      _L712_IfBlock1.acknowledgement = _L9_IfBlock1;
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L213_IfBlock1, &_L1_IfBlock1);
      if (kcg_true) {
        kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(
          &_L213_IfBlock1.DriverAck,
          &_L712_IfBlock1);
      }
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML7, &_L213_IfBlock1);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML, &outML7);
    }
    else {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML, &outML6);
    }
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(outML20, &outML);
  }
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L5_IfBlock2,
      inStatusList);
    /* 2 */
    clearStatus_manage_TextMessages_Pkg(
      &_L5_IfBlock2,
      _L4_IfBlock2,
      &_L2_IfBlock2,
      &_L3_IfBlock2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_1_outStatusList,
      &_L2_IfBlock2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      _21_outStatusList,
      &_1_outStatusList);
    _18_indexToInfo = _3_indexToInfo;
    _8_noname = _L3_IfBlock2;
  }
  else {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L111_IfBlock2,
      inStatusList);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outStatusList,
      &_L111_IfBlock2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      _21_outStatusList,
      &outStatusList);
    indexToInfo = default_indexToInfo;
    _18_indexToInfo = indexToInfo;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** receiveTextMessageAck_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


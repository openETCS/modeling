/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::checkIfNeeded */
kcg_bool checkIfNeeded_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::checkIfNeeded::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::checkIfNeeded::announcedLevel */ M_LEVEL announcedLevel,
  /* manage_TextMessages_Pkg::checkIfNeeded::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList)
{
  /* manage_TextMessages_Pkg::checkIfNeeded::sendingNeeded */
  static kcg_bool _1_sendingNeeded;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L10 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L10_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L9 */
  static M_LEVEL _L9_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L6 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L6_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L3 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L3_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::sendingNeeded */
  static kcg_bool sendingNeeded;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1::else::_L1 */
  static kcg_bool _L12_IfBlock1;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::checkIfNeeded::levelChange */
  static kcg_bool levelChange;
  /* manage_TextMessages_Pkg::checkIfNeeded::modeChange */
  static kcg_bool modeChange;
  /* manage_TextMessages_Pkg::checkIfNeeded::_L7 */
  static kcg_bool _L7;
  /* manage_TextMessages_Pkg::checkIfNeeded::_L11 */
  static kcg_bool _L11;
  /* manage_TextMessages_Pkg::checkIfNeeded::_L9 */
  static kcg_bool _L9;
  /* manage_TextMessages_Pkg::checkIfNeeded::_L17 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L17;
  /* manage_TextMessages_Pkg::checkIfNeeded::_L18 */
  static kcg_bool _L18;
  /* manage_TextMessages_Pkg::checkIfNeeded::sendingNeeded */
  static kcg_bool _3_sendingNeeded;
  
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L17,
    inModeLevel_Ack);
  _L7 = _L17.LevelNeedsAck;
  levelChange = _L7;
  _L18 = !_L7;
  _L11 = _L17.valid;
  _L9 = _L18 & _L11;
  modeChange = _L9;
  IfBlock1_clock = modeChange | levelChange;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L3_IfBlock1,
      inStatusList);
    kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
      &_L10_IfBlock1,
      inModeLevel_Ack);
    _L9_IfBlock1 = announcedLevel;
    /* 1 */
    mapMLtoElement_manage_TextMessages_Pkg(
      &_L10_IfBlock1,
      _L9_IfBlock1,
      &_L6_IfBlock1);
    _L1_IfBlock1 = /* 1 */
      findForCheck_manage_TextMessages_Pkg(&_L3_IfBlock1, &_L6_IfBlock1);
    _L8_IfBlock1 = !_L1_IfBlock1;
    _1_sendingNeeded = _L8_IfBlock1;
    _3_sendingNeeded = _1_sendingNeeded;
  }
  else {
    _L12_IfBlock1 = kcg_false;
    sendingNeeded = _L12_IfBlock1;
    _3_sendingNeeded = sendingNeeded;
  }
  return _3_sendingNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkIfNeeded_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


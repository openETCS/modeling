/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */ kcg_bool activateCheck,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus)
{
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool _1_tNvContactError;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L10 */
  static kcg_int _L10_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L8 */
  static T_NVCONTACT _L8_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::then::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool tNvContactError;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1::else::_L1 */
  static kcg_bool _L12_IfBlock1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::doCheck */
  static kcg_bool doCheck;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L1 */
  static morcStatus_T_RCM_Session_Types_Pkg _L1;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L2 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L2;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L3 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L3;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L4 */
  static kcg_bool _L4;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L5 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L5;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L6 */
  static kcg_bool _L6;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::_L7 */
  static kcg_bool _L7;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool _3_tNvContactError;
  
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L1, radioStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L2, &_L1.session);
  _L3 = _L2.phase;
  _L5 = sp_maintaining_RCM_Session_Types_Pkg;
  _L4 = _L3 == _L5;
  _L7 = activateCheck;
  _L6 = _L4 & _L7;
  doCheck = _L6;
  IfBlock1_clock = doCheck;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = systemTime;
    _L5_IfBlock1 = lastRelevantEventTimestamp;
    _L6_IfBlock1 = _L1_IfBlock1 - _L5_IfBlock1;
    _L8_IfBlock1 = tNvContact;
    _L10_IfBlock1 = 1000;
    _L9_IfBlock1 = _L8_IfBlock1 * _L10_IfBlock1;
    _L7_IfBlock1 = _L6_IfBlock1 > _L9_IfBlock1;
    _1_tNvContactError = _L7_IfBlock1;
    _3_tNvContactError = _1_tNvContactError;
  }
  else {
    _L12_IfBlock1 = kcg_false;
    tNvContactError = _L12_IfBlock1;
    _3_tNvContactError = tNvContactError;
  }
  return _3_tNvContactError;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ContinuousTimeoutCheck_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


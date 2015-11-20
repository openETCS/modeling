/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"

void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* 6 */ TimingChecker_reset_CheckEuroradioMessage(&outC->Context_6);
}

/* CheckEuroradioMessage::CheckEuroRadioMessage */
void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L64 */
  static kcg_bool _L64_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L73 */
  static kcg_bool _L73_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L76 */
  static ReceivedMessage_T_Common_Types_Pkg _L76_IfBlock1;
  
  if (activateCheck) {
    /* 6 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      rtmMessage,
      &_L76_IfBlock1);
    _L73_IfBlock1 = /* 6 */
      CheckMandatoryVariablesAndMA_CheckEuroradioMessage(&_L76_IfBlock1);
    /* 6 */
    TimingChecker_CheckEuroradioMessage(
      tNvContact * 1000,
      lastRelevantEventTimestamp,
      &_L76_IfBlock1,
      radioStatus,
      (*rtmMessage).systemTime,
      &outC->Context_6);
    _L64_IfBlock1 = /* 6 */
      CheckAllowedPacketsRadio_CheckEuroradioMessage(&_L76_IfBlock1);
    /* 6 */
    BuildOutput_CheckEuroradioMessage(
      &_L76_IfBlock1,
      (kcg_bool)
        (_L64_IfBlock1 & _L73_IfBlock1 & !(outC->Context_6.tNvContactError |
            outC->Context_6.sequenceError | outC->Context_6.otherTimingError)),
      &outC->checkedMessage);
    outC->radioSequenceError = (*rtmMessage).valid &
      outC->Context_6.sequenceError;
    outC->tNvContactError = (*rtmMessage).valid &
      outC->Context_6.tNvContactError;
    outC->otherTimingError = (*rtmMessage).valid &
      outC->Context_6.otherTimingError;
    outC->radioMessageConsistencyError = (*rtmMessage).valid & (!_L64_IfBlock1 |
        !_L73_IfBlock1);
  }
  else {
    outC->radioMessageConsistencyError = kcg_false;
    outC->otherTimingError = kcg_false;
    outC->tNvContactError = kcg_false;
    outC->radioSequenceError = kcg_false;
    /* 7 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      rtmMessage,
      &outC->checkedMessage);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage_CheckEuroradioMessage.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker_CheckEuroradioMessage.h"

void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->init = kcg_true;
}

/* CheckEuroradioMessage::TimingChecker */
void TimingChecker_CheckEuroradioMessage(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  static T_internal_Type_Obu_BasicTypes_Pkg tmp1;
  static kcg_bool tmp;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::connectingStatusConnecting */
  static kcg_bool _2_connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::connectingStatusConnecting */
  static kcg_bool connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool last_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN last_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::TimingChecker::TimestampKnown */
  static kcg_bool TimestampKnown;
  
  TimestampKnown = (*rtmMessage).Radio_Common_Header.t_train !=
    cTTrainUnknown1_CheckEuroradioMessage;
  if (outC->init) {
    last_lastKnownTTrain = cTTrainUnknown1_CheckEuroradioMessage;
    outC->init = kcg_false;
    last_ignoreTimestamp = kcg_false;
  }
  else {
    last_lastKnownTTrain = outC->lastKnownTTrain;
    last_ignoreTimestamp = outC->ignoreTimestamp;
  }
  IfBlock1_clock = TimestampKnown & (last_lastKnownTTrain !=
      cTTrainUnknown1_CheckEuroradioMessage);
  if (IfBlock1_clock) {
    outC->otherTimingError = kcg_false;
    if (tNvContact == 256000) {
      tmp1 = messageTimestamp;
    }
    else {
      tmp1 = tNvContact + lastRelevantEventTimestamp;
    }
    _L9_IfBlock1 = messageTimestamp <= tmp1;
    if (last_ignoreTimestamp) {
      outC->ignoreTimestamp = kcg_false;
      tmp = kcg_true;
    }
    else {
      outC->ignoreTimestamp = last_ignoreTimestamp;
      tmp = (*rtmMessage).Radio_Common_Header.t_train > last_lastKnownTTrain;
    }
    if (_L9_IfBlock1 & tmp) {
      outC->lastKnownTTrain = (*rtmMessage).Radio_Common_Header.t_train;
    }
    else {
      outC->lastKnownTTrain = last_lastKnownTTrain;
    }
    outC->sequenceError = !tmp;
    if (tNvContact > 256000) {
      outC->tNvContactError = kcg_true;
    }
    else {
      outC->tNvContactError = !_L9_IfBlock1;
    }
  }
  else {
    else_clock_IfBlock1 = TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown1_CheckEuroradioMessage);
    if (else_clock_IfBlock1) {
      connectingStatusConnecting_IfBlock1 = (*radioStatus).connection.status ==
        mcs_connected_RCM_Types_Pkg;
      if (connectingStatusConnecting_IfBlock1) {
        outC->tNvContactError = kcg_false;
        outC->ignoreTimestamp = kcg_true;
        outC->lastKnownTTrain = 0;
        outC->sequenceError = kcg_false;
      }
      else {
        outC->tNvContactError = kcg_false;
        outC->ignoreTimestamp = kcg_false;
        outC->lastKnownTTrain = last_lastKnownTTrain;
        outC->sequenceError = kcg_true;
      }
      outC->otherTimingError = outC->tNvContactError;
    }
    else {
      _2_connectingStatusConnecting_IfBlock1 =
        (*radioStatus).connection.status == mcs_connected_RCM_Types_Pkg;
      if (_2_connectingStatusConnecting_IfBlock1) {
        outC->tNvContactError = kcg_false;
        outC->ignoreTimestamp = kcg_true;
        outC->lastKnownTTrain = 0;
        outC->sequenceError = kcg_false;
      }
      else {
        outC->tNvContactError = kcg_false;
        outC->ignoreTimestamp = kcg_false;
        outC->lastKnownTTrain = last_lastKnownTTrain;
        outC->sequenceError = kcg_true;
      }
      outC->otherTimingError = outC->tNvContactError;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimingChecker_CheckEuroradioMessage.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker.h"

void TimingChecker_init(outC_TimingChecker *outC)
{
  outC->init = kcg_true;
  outC->ignoreTimestamp = kcg_true;
  outC->lastKnownTTrain = 0.0;
  outC->timingCheckResult = kcg_true;
}


void TimingChecker_reset(outC_TimingChecker *outC)
{
  outC->init = kcg_true;
}

/* TimingChecker */
void TimingChecker(
  /* TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* TimingChecker::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker *outC)
{
  kcg_bool tmp;
  /* TimingChecker::IfBlock1::then::_L12 */ kcg_bool _L12_IfBlock1;
  /* TimingChecker::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TimingChecker::IfBlock1::else::else::connectingStatusConnecting */ kcg_bool connectingStatusConnecting_IfBlock1;
  /* TimingChecker::ignoreTimestamp */ kcg_bool last_ignoreTimestamp;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN last_lastKnownTTrain;
  /* TimingChecker::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TimingChecker::TimestampKnown */ kcg_bool TimestampKnown;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_ignoreTimestamp = kcg_false;
    last_lastKnownTTrain = cTTrainUnknown;
  }
  else {
    last_ignoreTimestamp = outC->ignoreTimestamp;
    last_lastKnownTTrain = outC->lastKnownTTrain;
  }
  TimestampKnown = (*rtmMessage).Radio_Common_Header.t_train != cTTrainUnknown;
  IfBlock1_clock = TimestampKnown & (last_lastKnownTTrain != cTTrainUnknown);
  if (IfBlock1_clock) {
    if (last_ignoreTimestamp) {
      tmp = kcg_true;
      outC->ignoreTimestamp = kcg_false;
    }
    else {
      tmp = (kcg_int) (*rtmMessage).Radio_Common_Header.t_train > (kcg_int)
          last_lastKnownTTrain;
      outC->ignoreTimestamp = last_ignoreTimestamp;
    }
    _L12_IfBlock1 = (messageTimestamp <= tNvContact +
        lastRelevantEventTimestamp) & tmp;
    outC->timingCheckResult = _L12_IfBlock1;
    if (_L12_IfBlock1) {
      outC->lastKnownTTrain = (*rtmMessage).Radio_Common_Header.t_train;
    }
    else {
      outC->lastKnownTTrain = last_lastKnownTTrain;
    }
  }
  else {
    else_clock_IfBlock1 = TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown);
    if (else_clock_IfBlock1) {
      outC->timingCheckResult = kcg_false;
      outC->lastKnownTTrain = last_lastKnownTTrain;
      outC->ignoreTimestamp = last_ignoreTimestamp;
    }
    else {
      connectingStatusConnecting_IfBlock1 = connectionStatus ==
        cRadioSessionConnecting;
      if (connectingStatusConnecting_IfBlock1) {
        outC->ignoreTimestamp = kcg_true;
        outC->timingCheckResult = kcg_true;
        outC->lastKnownTTrain = 0.0;
      }
      else {
        outC->ignoreTimestamp = kcg_false;
        outC->timingCheckResult = kcg_false;
        outC->lastKnownTTrain = last_lastKnownTTrain;
      }
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TimingChecker.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


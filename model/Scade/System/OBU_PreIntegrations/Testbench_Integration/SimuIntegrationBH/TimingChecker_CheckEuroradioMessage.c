/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker_CheckEuroradioMessage.h"

#ifndef KCG_USER_DEFINED_INIT
void TimingChecker_init_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->init = kcg_true;
  outC->ignoreTimestamp = kcg_true;
  outC->lastKnownTTrain = 0;
  outC->otherTimingError = kcg_true;
  outC->sequenceError = kcg_true;
  outC->tNvContactError = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckEuroradioMessage::TimingChecker */
void TimingChecker_CheckEuroradioMessage(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _5_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _4_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _3_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _2_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _1_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L41 */
  static kcg_int _L41_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L40 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L40_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L39 */
  static kcg_bool _L39_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L38 */
  static kcg_bool _L38_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L37 */
  static kcg_bool _L37_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L36 */
  static kcg_int _L36_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L35 */
  static kcg_bool _L35_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L34 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L34_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L33 */
  static kcg_bool _L33_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L32 */
  static kcg_bool _L32_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L31 */
  static kcg_bool _L31_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L30 */
  static kcg_bool _L30_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L29 */
  static kcg_bool _L29_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L28 */
  static kcg_bool _L28_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L27 */
  static kcg_bool _L27_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L26 */
  static kcg_bool _L26_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L25 */
  static kcg_bool _L25_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L24 */
  static kcg_bool _L24_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L23 */
  static T_TRAIN _L23_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L22 */
  static T_TRAIN _L22_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L17 */
  static T_TRAIN _L17_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L14 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L14_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L5 */
  static T_TRAIN _L5_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L10 */
  static ReceivedMessage_T_Common_Types_Pkg _L10_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L11 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L11_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L12 */
  static kcg_bool _L12_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L13 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L13_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _25_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _24_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _23_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _22_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _21_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::then::_L5 */
  static kcg_bool _L543_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::then::_L3 */
  static kcg_int _L344_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::then::_L2 */
  static kcg_bool _L245_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _20_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _19_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _18_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _17_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _16_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::else::_L3 */
  static kcg_bool _L346_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::else::_L2 */
  static kcg_bool _L247_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2::else::_L1 */
  static kcg_bool _L148_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::connectingStatusConnecting */
  static kcg_bool _52_connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::_L1 */
  static morcStatus_T_RCM_Session_Types_Pkg _L1_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::_L5 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L551_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::_L6 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L650_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::_L7 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L749_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _6_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _7_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _8_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _9_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _10_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _35_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _34_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _33_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _32_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _31_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::then::_L5 */
  static kcg_bool _L5_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::then::_L3 */
  static kcg_int _L3_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::then::_L2 */
  static kcg_bool _L2_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _30_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _29_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _28_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _27_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _26_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::else::_L3 */
  static kcg_bool _L337_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::else::_L2 */
  static kcg_bool _L238_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2::else::_L1 */
  static kcg_bool _L1_IfBlock1_IfBlock2;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::IfBlock2 */
  static kcg_bool _36_IfBlock2_clock_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::connectingStatusConnecting */
  static kcg_bool connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::_L8 */
  static morcStatus_T_RCM_Session_Types_Pkg _L8_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::_L7 */
  static kcg_bool _L742_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::_L6 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L641_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::_L10 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L1040_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::_L9 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L939_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::tNvContactError */
  static kcg_bool _11_tNvContactError;
  /* CheckEuroradioMessage::TimingChecker::sequenceError */
  static kcg_bool _12_sequenceError;
  /* CheckEuroradioMessage::TimingChecker::otherTimingError */
  static kcg_bool _13_otherTimingError;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN _14_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool _15_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool last_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN last_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::TimingChecker::TimestampKnown */
  static kcg_bool TimestampKnown;
  /* CheckEuroradioMessage::TimingChecker::_L30 */
  static ReceivedMessage_T_Common_Types_Pkg _L30;
  /* CheckEuroradioMessage::TimingChecker::_L31 */
  static T_TRAIN _L31;
  /* CheckEuroradioMessage::TimingChecker::_L32 */
  static kcg_bool _L32;
  /* CheckEuroradioMessage::TimingChecker::_L34 */
  static T_TRAIN _L34;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L30, rtmMessage);
  _L31 = _L30.Radio_Common_Header.t_train;
  _L34 = cTTrainUnknown1_CheckEuroradioMessage;
  _L32 = _L31 != _L34;
  TimestampKnown = _L32;
  /* last_init_ck_lastKnownTTrain */ if (outC->init) {
    last_lastKnownTTrain = cTTrainUnknown1_CheckEuroradioMessage;
  }
  else {
    last_lastKnownTTrain = outC->lastKnownTTrain;
  }
  IfBlock1_clock = TimestampKnown & (last_lastKnownTTrain !=
      cTTrainUnknown1_CheckEuroradioMessage);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L40_IfBlock1 = tNvContact;
    _L41_IfBlock1 = 256000;
    _L39_IfBlock1 = _L40_IfBlock1 > _L41_IfBlock1;
    _L38_IfBlock1 = kcg_true;
    _L14_IfBlock1 = messageTimestamp;
    _L4_IfBlock1 = (kcg_int) _L14_IfBlock1;
    _L11_IfBlock1 = tNvContact;
    _L36_IfBlock1 = 256000;
    _L35_IfBlock1 = _L11_IfBlock1 == _L36_IfBlock1;
    _L13_IfBlock1 = lastRelevantEventTimestamp;
    _L6_IfBlock1 = _L11_IfBlock1 + _L13_IfBlock1;
    /* 7 */ if (_L35_IfBlock1) {
      _L34_IfBlock1 = _L14_IfBlock1;
    }
    else {
      _L34_IfBlock1 = _L6_IfBlock1;
    }
    _L9_IfBlock1 = _L4_IfBlock1 <= _L34_IfBlock1;
    _L31_IfBlock1 = !_L9_IfBlock1;
    /* 8 */ if (_L39_IfBlock1) {
      _L37_IfBlock1 = _L38_IfBlock1;
    }
    else {
      _L37_IfBlock1 = _L31_IfBlock1;
    }
    _1_tNvContactError = _L37_IfBlock1;
    outC->tNvContactError = _1_tNvContactError;
  }
  else {
    else_clock_IfBlock1 = TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown1_CheckEuroradioMessage);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L8_IfBlock1, radioStatus);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L939_IfBlock1,
        &_L8_IfBlock1.connection);
      _L1040_IfBlock1 = _L939_IfBlock1.status;
      _L641_IfBlock1 = mcs_connected_RCM_Types_Pkg;
      _L742_IfBlock1 = _L1040_IfBlock1 == _L641_IfBlock1;
      connectingStatusConnecting_IfBlock1 = _L742_IfBlock1;
      _36_IfBlock2_clock_IfBlock1 = connectingStatusConnecting_IfBlock1;
      /* ck_IfBlock2 */ if (_36_IfBlock2_clock_IfBlock1) {
        _L5_IfBlock1_IfBlock2 = kcg_false;
        _31_tNvContactError = _L5_IfBlock1_IfBlock2;
        _11_tNvContactError = _31_tNvContactError;
      }
      else {
        _L337_IfBlock1_IfBlock2 = kcg_false;
        _26_tNvContactError = _L337_IfBlock1_IfBlock2;
        _11_tNvContactError = _26_tNvContactError;
      }
      tNvContactError = _11_tNvContactError;
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L1_IfBlock1, radioStatus);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L650_IfBlock1,
        &_L1_IfBlock1.connection);
      _L749_IfBlock1 = _L650_IfBlock1.status;
      _L551_IfBlock1 = mcs_connected_RCM_Types_Pkg;
      _L3_IfBlock1 = _L749_IfBlock1 == _L551_IfBlock1;
      _52_connectingStatusConnecting_IfBlock1 = _L3_IfBlock1;
      IfBlock2_clock_IfBlock1 = _52_connectingStatusConnecting_IfBlock1;
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        _L543_IfBlock1_IfBlock2 = kcg_false;
        _21_tNvContactError = _L543_IfBlock1_IfBlock2;
        _6_tNvContactError = _21_tNvContactError;
      }
      else {
        _L346_IfBlock1_IfBlock2 = kcg_false;
        _16_tNvContactError = _L346_IfBlock1_IfBlock2;
        _6_tNvContactError = _16_tNvContactError;
      }
      tNvContactError = _6_tNvContactError;
    }
    outC->tNvContactError = tNvContactError;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* ck_IfBlock2 */ if (_36_IfBlock2_clock_IfBlock1) {
        _32_sequenceError = _L5_IfBlock1_IfBlock2;
        _12_sequenceError = _32_sequenceError;
      }
      else {
        _L1_IfBlock1_IfBlock2 = kcg_true;
        _27_sequenceError = _L1_IfBlock1_IfBlock2;
        _12_sequenceError = _27_sequenceError;
      }
      sequenceError = _12_sequenceError;
    }
    else {
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        _22_sequenceError = _L543_IfBlock1_IfBlock2;
        _7_sequenceError = _22_sequenceError;
      }
      else {
        _L148_IfBlock1_IfBlock2 = kcg_true;
        _17_sequenceError = _L148_IfBlock1_IfBlock2;
        _7_sequenceError = _17_sequenceError;
      }
      sequenceError = _7_sequenceError;
    }
  }
  /* last_init_ck_ignoreTimestamp */ if (outC->init) {
    last_ignoreTimestamp = kcg_false;
  }
  else {
    last_ignoreTimestamp = outC->ignoreTimestamp;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L26_IfBlock1 = last_ignoreTimestamp;
    _L25_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L10_IfBlock1, rtmMessage);
    _L5_IfBlock1 = _L10_IfBlock1.Radio_Common_Header.t_train;
    _L22_IfBlock1 = last_lastKnownTTrain;
    _L7_IfBlock1 = _L5_IfBlock1 > _L22_IfBlock1;
    /* 5 */ if (_L26_IfBlock1) {
      _L24_IfBlock1 = _L25_IfBlock1;
    }
    else {
      _L24_IfBlock1 = _L7_IfBlock1;
    }
    _L32_IfBlock1 = !_L24_IfBlock1;
    _2_sequenceError = _L32_IfBlock1;
    outC->sequenceError = _2_sequenceError;
    _L33_IfBlock1 = kcg_false;
    _3_otherTimingError = _L33_IfBlock1;
    outC->otherTimingError = _3_otherTimingError;
    _L12_IfBlock1 = _L9_IfBlock1 & _L24_IfBlock1;
    _L23_IfBlock1 = last_lastKnownTTrain;
    /* 2 */ if (_L12_IfBlock1) {
      _L17_IfBlock1 = _L5_IfBlock1;
    }
    else {
      _L17_IfBlock1 = _L23_IfBlock1;
    }
    _4_lastKnownTTrain = _L17_IfBlock1;
    outC->lastKnownTTrain = _4_lastKnownTTrain;
    _L28_IfBlock1 = last_ignoreTimestamp;
    _L29_IfBlock1 = kcg_false;
    _L30_IfBlock1 = last_ignoreTimestamp;
    /* 6 */ if (_L28_IfBlock1) {
      _L27_IfBlock1 = _L29_IfBlock1;
    }
    else {
      _L27_IfBlock1 = _L30_IfBlock1;
    }
    _5_ignoreTimestamp = _L27_IfBlock1;
    outC->ignoreTimestamp = _5_ignoreTimestamp;
  }
  else {
    outC->sequenceError = sequenceError;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* ck_IfBlock2 */ if (_36_IfBlock2_clock_IfBlock1) {
        _33_otherTimingError = _L5_IfBlock1_IfBlock2;
        _13_otherTimingError = _33_otherTimingError;
      }
      else {
        _28_otherTimingError = _L337_IfBlock1_IfBlock2;
        _13_otherTimingError = _28_otherTimingError;
      }
      otherTimingError = _13_otherTimingError;
    }
    else {
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        _23_otherTimingError = _L543_IfBlock1_IfBlock2;
        _8_otherTimingError = _23_otherTimingError;
      }
      else {
        _18_otherTimingError = _L346_IfBlock1_IfBlock2;
        _8_otherTimingError = _18_otherTimingError;
      }
      otherTimingError = _8_otherTimingError;
    }
    outC->otherTimingError = otherTimingError;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* ck_IfBlock2 */ if (_36_IfBlock2_clock_IfBlock1) {
        _L3_IfBlock1_IfBlock2 = 0;
        _34_lastKnownTTrain = _L3_IfBlock1_IfBlock2;
        _14_lastKnownTTrain = _34_lastKnownTTrain;
      }
      else {
        _29_lastKnownTTrain = last_lastKnownTTrain;
        _14_lastKnownTTrain = _29_lastKnownTTrain;
      }
      lastKnownTTrain = _14_lastKnownTTrain;
    }
    else {
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        _L344_IfBlock1_IfBlock2 = 0;
        _24_lastKnownTTrain = _L344_IfBlock1_IfBlock2;
        _9_lastKnownTTrain = _24_lastKnownTTrain;
      }
      else {
        _19_lastKnownTTrain = last_lastKnownTTrain;
        _9_lastKnownTTrain = _19_lastKnownTTrain;
      }
      lastKnownTTrain = _9_lastKnownTTrain;
    }
    outC->lastKnownTTrain = lastKnownTTrain;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* ck_IfBlock2 */ if (_36_IfBlock2_clock_IfBlock1) {
        _L2_IfBlock1_IfBlock2 = kcg_true;
        _35_ignoreTimestamp = _L2_IfBlock1_IfBlock2;
        _15_ignoreTimestamp = _35_ignoreTimestamp;
      }
      else {
        _L238_IfBlock1_IfBlock2 = kcg_false;
        _30_ignoreTimestamp = _L238_IfBlock1_IfBlock2;
        _15_ignoreTimestamp = _30_ignoreTimestamp;
      }
      ignoreTimestamp = _15_ignoreTimestamp;
    }
    else {
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        _L245_IfBlock1_IfBlock2 = kcg_true;
        _25_ignoreTimestamp = _L245_IfBlock1_IfBlock2;
        _10_ignoreTimestamp = _25_ignoreTimestamp;
      }
      else {
        _L247_IfBlock1_IfBlock2 = kcg_false;
        _20_ignoreTimestamp = _L247_IfBlock1_IfBlock2;
        _10_ignoreTimestamp = _20_ignoreTimestamp;
      }
      ignoreTimestamp = _10_ignoreTimestamp;
    }
    outC->ignoreTimestamp = ignoreTimestamp;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TimingChecker_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->init = kcg_true;
  outC->lastReceivedRadioTrainTrackMessageTimestamp = 0;
  outC->outIsConsistent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg */
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::lastReceivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN _2_lastReceivedRadioTrainTrackMessageTimestamp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::outIsConsistent */
  static kcg_bool _1_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L8 */
  static T_TRAIN _L8_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L6 */
  static T_TRAIN _L6_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L5 */
  static T_TRAIN _L5_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::lastReceivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN lastReceivedRadioTrainTrackMessageTimestamp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::outIsConsistent */
  static kcg_bool outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::else::_L1 */
  static kcg_bool _L13_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::lastReceivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN last_lastReceivedRadioTrainTrackMessageTimestamp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::radioTrainTrackHeaderIsPresent */
  static kcg_bool radioTrainTrackHeaderIsPresent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::radioTrainTrackMessageIsPresent */
  static kcg_bool radioTrainTrackMessageIsPresent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::currentRecivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN currentRecivedRadioTrainTrackMessageTimestamp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::consistencyCheckConditionSatisfied */
  static kcg_bool consistencyCheckConditionSatisfied;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L4 */
  static kcg_bool _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L5 */
  static kcg_bool _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L6 */
  static T_TRAIN _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L50 */
  static kcg_bool _L50;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L49 */
  static T_TRAIN _L49;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L48 */
  static T_TRAIN _L48;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L47 */
  static kcg_bool _L47;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L46 */
  static kcg_bool _L46;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L45 */
  static T_TRAIN _L45;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L44 */
  static kcg_bool _L44;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L43 */
  static T_TRAIN _L43;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L42 */
  static T_TRAIN _L42;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L41 */
  static T_TRAIN _L41;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L40 */
  static kcg_bool _L40;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L39 */
  static kcg_bool _L39;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L2);
  _L4 = /* 1 */
    RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  _L5 = /* 1 */
    RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L1);
  radioTrainTrackHeaderIsPresent = _L4;
  radioTrainTrackMessageIsPresent = _L5;
  _L6 = /* 1 */
    RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  currentRecivedRadioTrainTrackMessageTimestamp = _L6;
  _L42 = currentRecivedRadioTrainTrackMessageTimestamp;
  /* last_init_ck_lastReceivedRadioTrainTrackMessageTimestamp */ if (outC->init) {
    last_lastReceivedRadioTrainTrackMessageTimestamp = - 1;
  }
  else {
    last_lastReceivedRadioTrainTrackMessageTimestamp =
      outC->lastReceivedRadioTrainTrackMessageTimestamp;
  }
  _L43 = last_lastReceivedRadioTrainTrackMessageTimestamp;
  _L50 = _L42 > _L43;
  _L49 = currentRecivedRadioTrainTrackMessageTimestamp;
  _L45 = T_TRAIN_MIN;
  _L40 = _L49 >= _L45;
  _L48 = currentRecivedRadioTrainTrackMessageTimestamp;
  _L41 = T_TRAIN_MAX;
  _L46 = _L48 <= _L41;
  _L44 = radioTrainTrackMessageIsPresent;
  _L39 = radioTrainTrackHeaderIsPresent;
  _L47 = _L50 & _L40 & _L46 & _L44 & _L39;
  consistencyCheckConditionSatisfied = _L47;
  IfBlock1_clock = consistencyCheckConditionSatisfied;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L2_IfBlock1,
      inRadioTrainTrackMessage);
    _L4_IfBlock1 = /* 1 */
      RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &_L2_IfBlock1);
    _L1_IfBlock1 = /* 1 */
      RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &_L2_IfBlock1);
    _L3_IfBlock1 = _L4_IfBlock1 & _L1_IfBlock1;
    _1_outIsConsistent = _L3_IfBlock1;
    outC->outIsConsistent = _1_outIsConsistent;
    _L6_IfBlock1 = currentRecivedRadioTrainTrackMessageTimestamp;
    _L8_IfBlock1 = last_lastReceivedRadioTrainTrackMessageTimestamp;
    /* 1 */ if (_L3_IfBlock1) {
      _L5_IfBlock1 = _L6_IfBlock1;
    }
    else {
      _L5_IfBlock1 = _L8_IfBlock1;
    }
    _2_lastReceivedRadioTrainTrackMessageTimestamp = _L5_IfBlock1;
    outC->lastReceivedRadioTrainTrackMessageTimestamp =
      _2_lastReceivedRadioTrainTrackMessageTimestamp;
  }
  else {
    _L13_IfBlock1 = kcg_false;
    outIsConsistent = _L13_IfBlock1;
    outC->outIsConsistent = outIsConsistent;
    lastReceivedRadioTrainTrackMessageTimestamp =
      last_lastReceivedRadioTrainTrackMessageTimestamp;
    outC->lastReceivedRadioTrainTrackMessageTimestamp =
      lastReceivedRadioTrainTrackMessageTimestamp;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


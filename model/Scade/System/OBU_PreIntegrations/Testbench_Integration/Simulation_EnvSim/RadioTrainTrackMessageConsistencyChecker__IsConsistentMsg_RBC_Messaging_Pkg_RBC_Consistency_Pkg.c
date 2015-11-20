/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg */
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::currentRecivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN currentRecivedRadioTrainTrackMessageTimestamp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::consistencyCheckConditionSatisfied */
  static kcg_bool consistencyCheckConditionSatisfied;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L43 */
  static T_TRAIN _L43;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L43 = - 1;
  }
  else {
    _L43 = outC->lastReceivedRadioTrainTrackMessageTimestamp;
  }
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &_L2);
  currentRecivedRadioTrainTrackMessageTimestamp = /* 1 */
    RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  consistencyCheckConditionSatisfied =
    (currentRecivedRadioTrainTrackMessageTimestamp > _L43) &
    (currentRecivedRadioTrainTrackMessageTimestamp >= T_TRAIN_MIN) &
    (currentRecivedRadioTrainTrackMessageTimestamp <= T_TRAIN_MAX) & /* 1 */
    RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      inRadioTrainTrackMessage) & /* 1 */
    RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  if (consistencyCheckConditionSatisfied) {
    _L3_IfBlock1 = /* 1 */
      RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        inRadioTrainTrackMessage) & /* 1 */
      RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        inRadioTrainTrackMessage);
    outC->outIsConsistent = _L3_IfBlock1;
    if (_L3_IfBlock1) {
      outC->lastReceivedRadioTrainTrackMessageTimestamp =
        currentRecivedRadioTrainTrackMessageTimestamp;
    }
    else {
      outC->lastReceivedRadioTrainTrackMessageTimestamp = _L43;
    }
  }
  else {
    outC->outIsConsistent = kcg_false;
    outC->lastReceivedRadioTrainTrackMessageTimestamp = _L43;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


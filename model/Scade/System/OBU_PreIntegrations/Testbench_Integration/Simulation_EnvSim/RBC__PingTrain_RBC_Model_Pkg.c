/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"

void RBC__PingTrain_reset_RBC_Model_Pkg(outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__PingTrain */
void RBC__PingTrain_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__PingTrain::inForceTrigger */kcg_bool inForceTrigger,
  /* RBC_Model_Pkg::RBC__PingTrain::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__PingTrain::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__PingTrain::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  static Radio_TrackTrain_Header_T_TM tmp5;
  static NationalParams_T tmp4;
  static RadioTrackTrainMessageQueueEntry_T tmp3;
  static CompressedRadioMessage_TM tmp2;
  static NID_LRBG tmp1;
  static P042_trackside_int_T_TM tmp;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L87 */
  static kcg_bool _L87_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L79 */
  static M_LEVEL _L79_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L21 */
  static PosData_T _L21_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::Level_2_or_3 */
  static kcg_bool last_Level_2_or_3;
  /* RBC_Model_Pkg::RBC__PingTrain::trigger */
  static kcg_bool trigger;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    last_Level_2_or_3 = kcg_false;
  }
  else {
    last_Level_2_or_3 = outC->Level_2_or_3;
  }
  trigger = /* 2 */
    RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &(*inDataBus).lastSentTrackTrainMessage);
  if (trigger) {
    /* 2 */
    RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &(*inDataBus).lastSentTrackTrainMessage,
      &tmp5);
    outC->lastRadioTrackTrainMessageWasSentTimestamp = /* 2 */
      RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &tmp5);
  }
  else if (outC->init) {
    outC->lastRadioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  outC->init = kcg_false;
  /* 1 */
  DynamicConfig__GetNationalParams_RBC_Config_Pkg(&(*inDataBus).config, &tmp4);
  tmp1 = /* 1 */ NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(&tmp4);
  trigger = inForceTrigger | ((/* 1 */
        RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
          &(*inDataBus).messageQueue) ==
        RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY) & (/* 1 */
        Clock__GetSeconds_RBC_Time_Pkg(&(*inDataBus).clockk) -
        outC->lastRadioTrackTrainMessageWasSentTimestamp >= T_NVCONTACT_FACTOR *
        tmp1) & ((tmp1 > T_NVCONTACT_DEFAULT) & (tmp1 <
          T_NVCONTACT_UNLIMITED)));
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  if (trigger) {
    /* 11 */
    SessionManagement__GetPosData_RBC_Session_Pkg(
      &(*inDataBus).session,
      &_L21_IfBlock1);
    _L79_IfBlock1 = /* 8 */
      PosData__Get_M_LEVEL_RBC_Session_Pkg(&_L21_IfBlock1);
    _L87_IfBlock1 = (M_LEVEL_Level_3 == _L79_IfBlock1) | (_L79_IfBlock1 ==
        M_LEVEL_Level_2);
    outC->Level_2_or_3 = _L87_IfBlock1;
    tmp1 = /* 3 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&_L21_IfBlock1);
    if ((!_L87_IfBlock1 & last_Level_2_or_3) | inForceTrigger) {
      kcg_copy_P042_trackside_int_T_TM(
        &tmp,
        (P042_trackside_int_T_TM *) &P042_RequestSessionTermination);
    }
    else {
      kcg_copy_P042_trackside_int_T_TM(
        &tmp,
        (P042_trackside_int_T_TM *) &P042_DEFAULT);
    }
    /* 1 */
    RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      T_TRAIN_MIN,
      M_ACK_No_acknowledgement_required,
      tmp1,
      (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT,
      (P005_trackside_int_T_TM *) &P005_DEFAULT,
      &tmp,
      (P057_trackside_int_T_TM *) &P057_DEFAULT,
      (P058_trackside_int_T_TM *) &P058_DEFAULT,
      &tmp2);
    /* 2 */
    RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(&tmp2, &tmp3);
    /* 2 */
    RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
      &(*inDataBus).messageQueue,
      &tmp3,
      &outC->outDataBus.messageQueue);
  }
  else {
    outC->Level_2_or_3 = last_Level_2_or_3;
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->outDataBus.messageQueue,
      &(*inDataBus).messageQueue);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__PingTrain_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


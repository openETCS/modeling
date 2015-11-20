/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h"

/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
void RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  static Radio_TrackTrain_Header_T_TM tmp2;
  static Radio_TrackTrain_Header_T_TM tmp1;
  static T_TRAIN tmp;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L35 */
  static RadioTrackTrainMessageQueueEntry_T _L35_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L34 */
  static RadioTrackTrainMessageQueue_T _L34_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L36 */
  static CompressedRadioMessage_TM _L36_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = /* 2 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
      &(*inDataBus).messageQueue) < RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  if (IfBlock1_clock) {
    /* 2 */
    RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
      &(*inDataBus).messageQueue,
      &_L34_IfBlock1,
      &_L35_IfBlock1);
    /* 2 */
    RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
      &_L35_IfBlock1,
      &_L36_IfBlock1);
    /* 2 */
    RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L36_IfBlock1,
      &tmp1);
    tmp = /* 2 */ Clock__GetSeconds_RBC_Time_Pkg(&(*inDataBus).clockk);
    /* 2 */
    RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &tmp1,
      tmp,
      &tmp2);
    /* 2 */
    RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L36_IfBlock1,
      &tmp2,
      outRadioTrackTrainMessage);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(outDataBus, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &(*outDataBus).messageQueue,
      &_L34_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      &(*outDataBus).lastSentTrackTrainMessage,
      outRadioTrackTrainMessage);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(outDataBus, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &(*outDataBus).messageQueue,
      &(*inDataBus).messageQueue);
    /* 2 */
    RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      outRadioTrackTrainMessage);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


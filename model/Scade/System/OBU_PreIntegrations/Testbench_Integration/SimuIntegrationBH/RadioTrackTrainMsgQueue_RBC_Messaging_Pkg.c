/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h"

/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
void RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */ RBC_Data_T_RBC_DataBus_Pkg *_4_outDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *_3_outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */
  static CompressedRadioMessage_TM _2_outRadioTrackTrainMessage;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _1_outDataBus;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L49 */
  static RBC_Data_T_RBC_DataBus_Pkg _L49_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L45 */
  static RBC_Data_T_RBC_DataBus_Pkg _L45_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L44 */
  static RBC_Data_T_RBC_DataBus_Pkg _L44_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L42 */
  static RBC_Data_T_RBC_DataBus_Pkg _L42_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L43 */
  static RadioTrackTrainMessageQueue_T _L43_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L41 */
  static Clock_T _L41_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L32 */
  static CompressedRadioMessage_TM _L32_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L33 */
  static Radio_TrackTrain_Header_T_TM _L33_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L35 */
  static RadioTrackTrainMessageQueueEntry_T _L35_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L34 */
  static RadioTrackTrainMessageQueue_T _L34_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L36 */
  static CompressedRadioMessage_TM _L36_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L37 */
  static Radio_TrackTrain_Header_T_TM _L37_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L39 */
  static T_TRAIN _L39_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */
  static CompressedRadioMessage_TM outRadioTrackTrainMessage;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg outDataBus;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::else::_L7 */
  static RBC_Data_T_RBC_DataBus_Pkg _L7_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::else::_L8 */
  static RBC_Data_T_RBC_DataBus_Pkg _L8_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::else::_L5 */
  static RadioTrackTrainMessageQueue_T _L5_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::else::_L6 */
  static RBC_Data_T_RBC_DataBus_Pkg _L6_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::else::_L3 */
  static CompressedRadioMessage_TM _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::remainingCapacity */
  static kcg_int remainingCapacity;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::_L1 */
  static RBC_Data_T_RBC_DataBus_Pkg _L1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::_L5 */
  static kcg_int _L5;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::_L6 */
  static RadioTrackTrainMessageQueue_T _L6;
  
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L1, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L6, &_L1.messageQueue);
  _L5 = /* 2 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(&_L6);
  remainingCapacity = _L5;
  IfBlock1_clock = remainingCapacity < RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L45_IfBlock1, inDataBus);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L42_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L43_IfBlock1,
      &_L42_IfBlock1.messageQueue);
    /* 2 */
    RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
      &_L43_IfBlock1,
      &_L34_IfBlock1,
      &_L35_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L44_IfBlock1, &_L45_IfBlock1);
    if (kcg_true) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L44_IfBlock1.messageQueue,
        &_L34_IfBlock1);
    }
    /* 2 */
    RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
      &_L35_IfBlock1,
      &_L36_IfBlock1);
    /* 2 */
    RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L36_IfBlock1,
      &_L37_IfBlock1);
    kcg_copy_Clock_T(&_L41_IfBlock1, &_L42_IfBlock1.clockk);
    _L39_IfBlock1 = /* 2 */ Clock__GetSeconds_RBC_Time_Pkg(&_L41_IfBlock1);
    /* 2 */
    RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L37_IfBlock1,
      _L39_IfBlock1,
      &_L33_IfBlock1);
    /* 2 */
    RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L36_IfBlock1,
      &_L33_IfBlock1,
      &_L32_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L49_IfBlock1, &_L44_IfBlock1);
    if (kcg_true) {
      kcg_copy_CompressedRadioMessage_TM(
        &_L49_IfBlock1.lastSentTrackTrainMessage,
        &_L32_IfBlock1);
    }
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_L49_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(_4_outDataBus, &_1_outDataBus);
    kcg_copy_CompressedRadioMessage_TM(
      &_2_outRadioTrackTrainMessage,
      &_L32_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      _3_outRadioTrackTrainMessage,
      &_2_outRadioTrackTrainMessage);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L8_IfBlock1, inDataBus);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L6_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L5_IfBlock1,
      &_L6_IfBlock1.messageQueue);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L7_IfBlock1, &_L8_IfBlock1);
    if (kcg_true) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L7_IfBlock1.messageQueue,
        &_L5_IfBlock1);
    }
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outDataBus, &_L7_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(_4_outDataBus, &outDataBus);
    /* 2 */
    RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      &_L3_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      &outRadioTrackTrainMessage,
      &_L3_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      _3_outRadioTrackTrainMessage,
      &outRadioTrackTrainMessage);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


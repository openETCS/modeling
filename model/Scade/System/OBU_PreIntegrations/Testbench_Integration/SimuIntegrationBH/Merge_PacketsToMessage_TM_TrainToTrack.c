/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"

/* TM_TrainToTrack::Merge_PacketsToMessage */
void Merge_PacketsToMessage_TM_TrainToTrack(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */ M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */ M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */ M_TrainTrack_Message_T_TM_radio_messages *RadioMessage)
{
  /* TM_TrainToTrack::Merge_PacketsToMessage::_L1 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L1;
  /* TM_TrainToTrack::Merge_PacketsToMessage::_L2 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L2;
  /* TM_TrainToTrack::Merge_PacketsToMessage::_L4 */
  static M_TrainTrack_Message_T_TM_radio_messages _L4;
  
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &_L1,
    OptionalPackets);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L2, MessageHeader);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L4.Message, &_L2);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &_L4.OptionalPackets,
    &_L1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(RadioMessage, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_PacketsToMessage_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


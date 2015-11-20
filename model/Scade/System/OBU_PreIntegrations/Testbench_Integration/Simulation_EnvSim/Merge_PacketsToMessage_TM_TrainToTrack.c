/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"

/* TM_TrainToTrack::Merge_PacketsToMessage */
void Merge_PacketsToMessage_TM_TrainToTrack(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */M_TrainTrack_Message_T_TM_radio_messages *RadioMessage)
{
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &(*RadioMessage).Message,
    MessageHeader);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &(*RadioMessage).OptionalPackets,
    OptionalPackets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merge_PacketsToMessage_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */


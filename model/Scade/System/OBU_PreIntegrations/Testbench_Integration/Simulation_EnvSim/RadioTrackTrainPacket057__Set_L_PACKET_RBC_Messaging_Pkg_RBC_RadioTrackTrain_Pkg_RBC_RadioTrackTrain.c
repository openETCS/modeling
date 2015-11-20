/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET */
void RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET::inRadioTrackTrainPacket */P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET::in_L_PACKET */L_PACKET in_L_PACKET,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET::outRadioTrackTrainPacket */P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  kcg_copy_P057_trackside_int_T_TM(
    outRadioTrackTrainPacket,
    inRadioTrackTrainPacket);
  (*outRadioTrackTrainPacket).L_PACKET = in_L_PACKET;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


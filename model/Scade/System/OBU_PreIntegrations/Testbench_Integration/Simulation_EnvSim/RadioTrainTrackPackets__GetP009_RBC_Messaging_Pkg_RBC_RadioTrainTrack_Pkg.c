/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009 */
void RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009::inRadioTrainTrackPackets */outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009::outRadioTrainTrackPacket */PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *outRadioTrainTrackPacket)
{
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


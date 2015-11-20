/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities */
void RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::inRadioTrainTrackPacket */PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::outTractionIdentities */aTractionIdentity_T_Packet_TrainTypes_Pkg *outTractionIdentities)
{
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    outTractionIdentities,
    &(*inRadioTrainTrackPacket).tractionIdentity);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


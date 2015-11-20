/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities */
void RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::inRadioTrainTrackPacket */PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::outNationalSystemIdentities */aNID_NTC_T_Packet_TrainTypes_Pkg *outNationalSystemIdentities)
{
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    outNationalSystemIdentities,
    &(*inRadioTrainTrackPacket).nid_ntc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


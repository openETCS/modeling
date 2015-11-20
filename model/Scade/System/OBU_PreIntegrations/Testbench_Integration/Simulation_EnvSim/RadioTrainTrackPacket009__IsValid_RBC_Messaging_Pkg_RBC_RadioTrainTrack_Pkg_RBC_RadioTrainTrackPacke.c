/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid */
kcg_bool RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid::inRadioTrainTrackPacket */PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  outIsValid = (*inRadioTrainTrackPacket).valid;
  return outIsValid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


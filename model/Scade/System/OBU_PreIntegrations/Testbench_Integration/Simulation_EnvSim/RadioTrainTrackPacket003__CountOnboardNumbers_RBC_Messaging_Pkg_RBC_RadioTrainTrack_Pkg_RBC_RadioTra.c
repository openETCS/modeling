/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers */
kcg_int RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::inRadioTrainTrackPacket */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::outCount */
  static kcg_int outCount;
  
  outCount = (*inRadioTrainTrackPacket).number;
  return outCount;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */


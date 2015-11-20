/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN */
NC_TRAIN RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN::inRadioTrainTrackPacket */PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN::out_NC_TRAIN */
  static NC_TRAIN out_NC_TRAIN;
  
  out_NC_TRAIN = (*inRadioTrainTrackPacket).nc_train;
  return out_NC_TRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


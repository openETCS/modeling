/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN */
V_TRAIN RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::inRadioTrainTrackPacket */PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::out_V_TRAIN */
  static V_TRAIN out_V_TRAIN;
  
  out_V_TRAIN = (*inRadioTrainTrackPacket).packet0.V_TRAIN;
  return out_V_TRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


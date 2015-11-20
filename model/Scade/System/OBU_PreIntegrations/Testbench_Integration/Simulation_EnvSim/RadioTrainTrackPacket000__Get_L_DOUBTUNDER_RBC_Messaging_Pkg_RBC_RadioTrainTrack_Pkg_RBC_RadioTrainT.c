/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER */
L_DOUBTUNDER RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER::inRadioTrainTrackPacket */PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER::out_L_DOUBTUNDER */
  static L_DOUBTUNDER out_L_DOUBTUNDER;
  
  out_L_DOUBTUNDER = (*inRadioTrainTrackPacket).packet0.L_DOUBTUNDER;
  return out_L_DOUBTUNDER;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


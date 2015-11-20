/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH */
Q_LENGTH RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::inRadioTrainTrackPacket */PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::out_Q_LENGTH */
  static Q_LENGTH out_Q_LENGTH;
  
  out_Q_LENGTH = (*inRadioTrainTrackPacket).packet0.length;
  return out_Q_LENGTH;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


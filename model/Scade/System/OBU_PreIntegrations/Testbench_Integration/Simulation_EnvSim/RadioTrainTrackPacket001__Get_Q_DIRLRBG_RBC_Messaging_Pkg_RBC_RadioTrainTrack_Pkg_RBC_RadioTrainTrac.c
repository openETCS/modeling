/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket001__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DIRLRBG */
Q_DIRLRBG RadioTrainTrackPacket001__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DIRLRBG::inRadioTrainTrackPacket */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DIRLRBG::out_Q_DIRLRBG */
  static Q_DIRLRBG out_Q_DIRLRBG;
  
  out_Q_DIRLRBG = (*inRadioTrainTrackPacket).packet1.dirlrbg;
  return out_Q_DIRLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket001__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


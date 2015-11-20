/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket001__Get_NID_PRVLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG */
NID_PRVLRBG RadioTrainTrackPacket001__Get_NID_PRVLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG::inRadioTrainTrackPacket */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG::out_NID_PRVLRBG */
  static NID_PRVLRBG out_NID_PRVLRBG;
  
  out_NID_PRVLRBG = (*inRadioTrainTrackPacket).packet1.NID_PRVLRBG;
  return out_NID_PRVLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket001__Get_NID_PRVLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


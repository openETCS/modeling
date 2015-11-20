/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE */
M_LOADINGGAUGE RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::inRadioTrainTrackPacket */PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::out_M_LOADINGGAUGE */
  static M_LOADINGGAUGE out_M_LOADINGGAUGE;
  
  out_M_LOADINGGAUGE = (*inRadioTrainTrackPacket).m_loadinggoage;
  return out_M_LOADINGGAUGE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


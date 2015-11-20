/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT */
M_AXLELOADCAT RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::inRadioTrainTrackPacket */PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::out_M_AXLELOADCAT */
  static M_AXLELOADCAT out_M_AXLELOADCAT;
  
  out_M_AXLELOADCAT = (*inRadioTrainTrackPacket).m_axleloadcat;
  return out_M_AXLELOADCAT;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


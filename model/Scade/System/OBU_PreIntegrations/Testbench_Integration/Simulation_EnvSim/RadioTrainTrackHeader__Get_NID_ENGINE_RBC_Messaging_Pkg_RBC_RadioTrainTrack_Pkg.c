/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE */
NID_ENGINE RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE::in_RadioTrainTrackHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *in_RadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_ENGINE::out_NID_ENGINE */
  static NID_ENGINE out_NID_ENGINE;
  
  out_NID_ENGINE = (*in_RadioTrainTrackHeader).nid_engine;
  return out_NID_ENGINE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


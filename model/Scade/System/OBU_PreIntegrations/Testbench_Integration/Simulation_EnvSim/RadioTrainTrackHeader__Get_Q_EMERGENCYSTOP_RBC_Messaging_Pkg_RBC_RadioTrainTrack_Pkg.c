/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP */
Q_EMERGENCYSTOP RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP::inRadioTrainTrackHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP::out_Q_EMERGENCYSTOP */
  static Q_EMERGENCYSTOP out_Q_EMERGENCYSTOP;
  
  out_Q_EMERGENCYSTOP = (*inRadioTrainTrackHeader).xQ_EMERGENCYSTOP;
  return out_Q_EMERGENCYSTOP;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


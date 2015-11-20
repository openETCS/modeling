/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN */
T_TRAIN RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::inRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::out_T_TRAIN */
  static T_TRAIN out_T_TRAIN;
  
  out_T_TRAIN = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*inRadioTrackTrainHeader).t_train);
  return out_T_TRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


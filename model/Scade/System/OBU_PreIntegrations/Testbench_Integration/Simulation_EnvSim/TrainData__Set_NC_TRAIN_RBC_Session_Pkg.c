/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_NC_TRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_NC_TRAIN */
void TrainData__Set_NC_TRAIN_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::in_NC_TRAIN */NC_TRAIN in_NC_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::out_TrainData */TrainData_T *out_TrainData)
{
  kcg_copy_TrainData_T(out_TrainData, inTrainData);
  (*out_TrainData).nc_train = in_NC_TRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__Set_NC_TRAIN_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN */
void TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::in_V_TRAIN */V_TRAIN in_V_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).v_maxtrain = in_V_TRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


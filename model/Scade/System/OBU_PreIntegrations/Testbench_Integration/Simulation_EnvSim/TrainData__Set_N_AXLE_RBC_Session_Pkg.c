/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_N_AXLE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_N_AXLE */
void TrainData__Set_N_AXLE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::in_N_AXLE */N_AXLE in_N_AXLE,
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).n_axle = in_N_AXLE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__Set_N_AXLE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


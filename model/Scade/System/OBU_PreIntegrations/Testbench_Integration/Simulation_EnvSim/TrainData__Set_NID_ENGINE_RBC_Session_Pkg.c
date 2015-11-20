/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_NID_ENGINE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_NID_ENGINE */
void TrainData__Set_NID_ENGINE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::in_NID_ENGINE */NID_ENGINE in_NID_ENGINE,
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).nid_engine = in_NID_ENGINE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__Set_NID_ENGINE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


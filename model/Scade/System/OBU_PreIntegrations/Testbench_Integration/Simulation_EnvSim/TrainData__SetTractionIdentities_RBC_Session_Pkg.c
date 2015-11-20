/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetTractionIdentities_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetTractionIdentities */
void TrainData__SetTractionIdentities_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTractionIdentity */aTractionIdentity_T_Packet_TrainTypes_Pkg *inTractionIdentity,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &(*outTrainData).m_TractionIdentities,
    inTractionIdentity);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__SetTractionIdentities_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


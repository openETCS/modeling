/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers */
N_ITER PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::inPositionReportParameters */PosRepParams_T *inPositionReportParameters)
{
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::outNumberOfIncrementalDistancesAndQualifiers */
  static N_ITER outNumberOfIncrementalDistancesAndQualifiers;
  
  outNumberOfIncrementalDistancesAndQualifiers =
    (*inPositionReportParameters).m_NumberOfIncrementalDistancesAndQualifiers;
  return outNumberOfIncrementalDistancesAndQualifiers;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


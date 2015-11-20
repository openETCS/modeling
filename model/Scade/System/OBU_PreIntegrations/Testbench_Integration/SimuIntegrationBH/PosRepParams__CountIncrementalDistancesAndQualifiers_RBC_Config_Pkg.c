/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers */
N_ITER PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::inPositionReportParameters */ PosRepParams_T *inPositionReportParameters)
{
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::_L1 */
  static PosRepParams_T _L1;
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::_L2 */
  static N_ITER _L2;
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::outNumberOfIncrementalDistancesAndQualifiers */
  static N_ITER outNumberOfIncrementalDistancesAndQualifiers;
  
  kcg_copy_PosRepParams_T(&_L1, inPositionReportParameters);
  _L2 = _L1.m_NumberOfIncrementalDistancesAndQualifiers;
  outNumberOfIncrementalDistancesAndQualifiers = _L2;
  return outNumberOfIncrementalDistancesAndQualifiers;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


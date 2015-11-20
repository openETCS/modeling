/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers */
void PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::inPositionReportParameters */ PosRepParams_T *inPositionReportParameters,
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::outIncrementalDistancesAndQualifiers */ array_169739 *outIncrementalDistancesAndQualifiers)
{
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::_L1 */
  static PosRepParams_T _L1;
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::_L2 */
  static array_169739 _L2;
  
  kcg_copy_PosRepParams_T(&_L1, inPositionReportParameters);
  kcg_copy_array_169739(&_L2, &_L1.m_IncrementalDistancesAndQualifiers);
  kcg_copy_array_169739(outIncrementalDistancesAndQualifiers, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetNationalParams_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetNationalParams */
void DynamicConfig__GetNationalParams_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::outNationalParams */ NationalParams_T *outNationalParams)
{
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::_L1 */
  static DynamicConfig_T _L1;
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::_L2 */
  static NationalParams_T _L2;
  
  kcg_copy_DynamicConfig_T(&_L1, inDynamicConfig);
  kcg_copy_NationalParams_T(&_L2, &_L1.m_NationalParams);
  kcg_copy_NationalParams_T(outNationalParams, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetNationalParams_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


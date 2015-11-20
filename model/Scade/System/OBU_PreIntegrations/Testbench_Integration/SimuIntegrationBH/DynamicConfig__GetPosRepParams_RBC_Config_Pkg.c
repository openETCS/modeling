/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetPosRepParams_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetPosRepParams */
void DynamicConfig__GetPosRepParams_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::outPosRepParams */ PosRepParams_T *outPosRepParams)
{
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::_L1 */
  static DynamicConfig_T _L1;
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::_L2 */
  static PosRepParams_T _L2;
  
  kcg_copy_DynamicConfig_T(&_L1, inDynamicConfig);
  kcg_copy_PosRepParams_T(&_L2, &_L1.m_PosRepParams);
  kcg_copy_PosRepParams_T(outPosRepParams, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetPosRepParams_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


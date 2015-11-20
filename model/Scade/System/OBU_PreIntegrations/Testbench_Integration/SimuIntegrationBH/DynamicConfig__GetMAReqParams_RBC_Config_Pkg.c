/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetMAReqParams_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetMAReqParams */
void DynamicConfig__GetMAReqParams_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::outMaReqParams */ MAReqParams_T *outMaReqParams)
{
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::_L1 */
  static DynamicConfig_T _L1;
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::_L2 */
  static MAReqParams_T _L2;
  
  kcg_copy_DynamicConfig_T(&_L1, inDynamicConfig);
  kcg_copy_MAReqParams_T(&_L2, &_L1.m_MAReqParams);
  kcg_copy_MAReqParams_T(outMaReqParams, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetMAReqParams_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


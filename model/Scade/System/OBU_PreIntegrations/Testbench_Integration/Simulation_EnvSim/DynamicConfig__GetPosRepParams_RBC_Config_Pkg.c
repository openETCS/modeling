/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetPosRepParams_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetPosRepParams */
void DynamicConfig__GetPosRepParams_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::inDynamicConfig */DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::outPosRepParams */PosRepParams_T *outPosRepParams)
{
  kcg_copy_PosRepParams_T(outPosRepParams, &(*inDynamicConfig).m_PosRepParams);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DynamicConfig__GetPosRepParams_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


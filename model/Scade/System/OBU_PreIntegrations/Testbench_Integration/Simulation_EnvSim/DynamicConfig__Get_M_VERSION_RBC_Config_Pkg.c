/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION */
M_VERSION DynamicConfig__Get_M_VERSION_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::inDynamicConfig */DynamicConfig_T *inDynamicConfig)
{
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::out_M_VERSION */
  static M_VERSION out_M_VERSION;
  
  out_M_VERSION = (*inDynamicConfig).m_version;
  return out_M_VERSION;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */


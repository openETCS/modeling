/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION */
M_VERSION DynamicConfig__Get_M_VERSION_RBC_Config_Pkg(
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::inDynamicConfig */ DynamicConfig_T *inDynamicConfig)
{
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::_L1 */
  static DynamicConfig_T _L1;
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::_L2 */
  static M_VERSION _L2;
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::out_M_VERSION */
  static M_VERSION out_M_VERSION;
  
  kcg_copy_DynamicConfig_T(&_L1, inDynamicConfig);
  _L2 = _L1.m_version;
  out_M_VERSION = _L2;
  return out_M_VERSION;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


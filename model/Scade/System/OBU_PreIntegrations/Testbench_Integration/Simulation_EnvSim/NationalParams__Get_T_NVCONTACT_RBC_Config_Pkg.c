/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT */
T_NVCONTACT NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::inNationalParams */NationalParams_T *inNationalParams)
{
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::out_T_NVCONTACT */
  static T_NVCONTACT out_T_NVCONTACT;
  
  out_T_NVCONTACT = (*inNationalParams).t_nvcontact;
  return out_T_NVCONTACT;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_NVCONTACT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_NVCONTACT */
T_NVCONTACT CAST_Int_to_T_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_NVCONTACT::t_nvcontact_int */kcg_int t_nvcontact_int)
{
  /* TM_conversions::CAST_Int_to_T_NVCONTACT::t_nvcontact */
  static T_NVCONTACT t_nvcontact;
  
  t_nvcontact = t_nvcontact_int;
  return t_nvcontact;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_NVCONTACT_TM_conversions.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */


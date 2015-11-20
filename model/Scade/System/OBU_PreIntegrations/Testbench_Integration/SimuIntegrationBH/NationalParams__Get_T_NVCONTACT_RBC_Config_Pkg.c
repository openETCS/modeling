/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT */
T_NVCONTACT NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::inNationalParams */ NationalParams_T *inNationalParams)
{
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::_L1 */
  static NationalParams_T _L1;
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::_L2 */
  static T_NVCONTACT _L2;
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::out_T_NVCONTACT */
  static T_NVCONTACT out_T_NVCONTACT;
  
  kcg_copy_NationalParams_T(&_L1, inNationalParams);
  _L2 = _L1.t_nvcontact;
  out_T_NVCONTACT = _L2;
  return out_T_NVCONTACT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


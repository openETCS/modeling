/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_MAR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_MAR */
T_MAR MAReqParams__Get_T_MAR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::_L1 */
  static MAReqParams_T _L1;
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::_L2 */
  static T_MAR _L2;
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::out_T_MAR */
  static T_MAR out_T_MAR;
  
  kcg_copy_MAReqParams_T(&_L1, inMAReqParams);
  _L2 = _L1.t_mar;
  out_T_MAR = _L2;
  return out_T_MAR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_T_MAR_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


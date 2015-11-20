/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST */
T_TIMEOUTRQST MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::_L1 */
  static MAReqParams_T _L1;
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::_L2 */
  static T_TIMEOUTRQST _L2;
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::out_T_TIMEOUTRQST */
  static T_TIMEOUTRQST out_T_TIMEOUTRQST;
  
  kcg_copy_MAReqParams_T(&_L1, inMAReqParams);
  _L2 = _L1.t_timeoutrqst;
  out_T_TIMEOUTRQST = _L2;
  return out_T_TIMEOUTRQST;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


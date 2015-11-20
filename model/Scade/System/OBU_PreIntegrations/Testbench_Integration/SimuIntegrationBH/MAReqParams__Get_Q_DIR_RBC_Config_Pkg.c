/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_Q_DIR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_Q_DIR */
Q_DIR MAReqParams__Get_Q_DIR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::_L1 */
  static MAReqParams_T _L1;
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::_L2 */
  static Q_DIR _L2;
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  kcg_copy_MAReqParams_T(&_L1, inMAReqParams);
  _L2 = _L1.q_dir;
  out_Q_DIR = _L2;
  return out_Q_DIR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_Q_DIR_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


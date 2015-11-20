/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_Q_DIR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_Q_DIR */
Q_DIR PosRepParams__Get_Q_DIR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::_L1 */
  static PosRepParams_T _L1;
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::_L2 */
  static Q_DIR _L2;
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  kcg_copy_PosRepParams_T(&_L1, inPosRepParams);
  _L2 = _L1.q_dir;
  out_Q_DIR = _L2;
  return out_Q_DIR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_Q_DIR_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


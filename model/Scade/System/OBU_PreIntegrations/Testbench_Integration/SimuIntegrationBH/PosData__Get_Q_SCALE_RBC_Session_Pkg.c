/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_Q_SCALE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_Q_SCALE */
Q_SCALE PosData__Get_Q_SCALE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::_L2 */
  static Q_SCALE _L2;
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::out_Q_SCALE */
  static Q_SCALE out_Q_SCALE;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = _L1.q_scale;
  out_Q_SCALE = _L2;
  return out_Q_SCALE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_Q_SCALE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


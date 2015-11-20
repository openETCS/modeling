/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_D_LRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_D_LRBG */
D_LRBG PosData__Get_D_LRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_D_LRBG::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_D_LRBG::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Get_D_LRBG::_L2 */
  static D_LRBG _L2;
  /* RBC_Session_Pkg::PosData__Get_D_LRBG::out_D_LRBG */
  static D_LRBG out_D_LRBG;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = _L1.d_lrbg;
  out_D_LRBG = _L2;
  return out_D_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_D_LRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


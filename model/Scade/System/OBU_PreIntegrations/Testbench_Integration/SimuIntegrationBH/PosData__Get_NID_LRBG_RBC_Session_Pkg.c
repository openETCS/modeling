/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_NID_LRBG */
NID_LRBG PosData__Get_NID_LRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::_L2 */
  static NID_LRBG _L2;
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::out_NID_LRBG */
  static NID_LRBG out_NID_LRBG;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = _L1.nid_lrbg;
  out_NID_LRBG = _L2;
  return out_NID_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_NID_LRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


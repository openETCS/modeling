/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DLRBG */
void PosData__Set_Q_DLRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::in_Q_DLRBG */ Q_DLRBG in_Q_DLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::_L2 */
  static PosData_T _L2;
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::_L3 */
  static Q_DLRBG _L3;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L3 = in_Q_DLRBG;
  kcg_copy_PosData_T(&_L2, &_L1);
  if (kcg_true) {
    _L2.q_dlrbg = _L3;
  }
  kcg_copy_PosData_T(outPosData, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_DLRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


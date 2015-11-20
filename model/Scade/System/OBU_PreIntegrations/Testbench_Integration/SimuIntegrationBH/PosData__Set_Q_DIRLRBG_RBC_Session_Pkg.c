/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG */
void PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::in_Q_DIRLRBG */ Q_DIRLRBG in_Q_DIRLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::_L2 */
  static Q_DIRLRBG _L2;
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::_L3 */
  static PosData_T _L3;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = in_Q_DIRLRBG;
  kcg_copy_PosData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.q_dirlrbg = _L2;
  }
  kcg_copy_PosData_T(outPosData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


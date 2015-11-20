/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_L_TRAININT_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_L_TRAININT */
void PosData__Set_L_TRAININT_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::in_L_TRAININT */ L_TRAININT in_L_TRAININT,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::_L2 */
  static PosData_T _L2;
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::_L3 */
  static L_TRAININT _L3;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L3 = in_L_TRAININT;
  kcg_copy_PosData_T(&_L2, &_L1);
  if (kcg_true) {
    _L2.l_trainint = _L3;
  }
  kcg_copy_PosData_T(outPosData, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_L_TRAININT_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


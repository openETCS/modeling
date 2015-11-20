/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_M_MODE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_M_MODE */
void PosData__Set_M_MODE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_M_MODE::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_M_MODE::in_M_MODE */ M_MODE in_M_MODE,
  /* RBC_Session_Pkg::PosData__Set_M_MODE::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Set_M_MODE::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Set_M_MODE::_L2 */
  static M_MODE _L2;
  /* RBC_Session_Pkg::PosData__Set_M_MODE::_L3 */
  static PosData_T _L3;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = in_M_MODE;
  kcg_copy_PosData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.m_mode = _L2;
  }
  kcg_copy_PosData_T(outPosData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_M_MODE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


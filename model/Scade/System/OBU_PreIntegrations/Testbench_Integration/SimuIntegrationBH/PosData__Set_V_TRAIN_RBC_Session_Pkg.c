/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_V_TRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_V_TRAIN */
void PosData__Set_V_TRAIN_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::in_V_TRAIN */ V_TRAIN in_V_TRAIN,
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::_L2 */
  static V_TRAIN _L2;
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::_L3 */
  static PosData_T _L3;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  _L2 = in_V_TRAIN;
  kcg_copy_PosData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.v_train = _L2;
  }
  kcg_copy_PosData_T(outPosData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_V_TRAIN_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


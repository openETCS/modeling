/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_NID_ENGINE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_NID_ENGINE */
void TrainData__Set_NID_ENGINE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::in_NID_ENGINE */ NID_ENGINE in_NID_ENGINE,
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::_L2 */
  static TrainData_T _L2;
  /* RBC_Session_Pkg::TrainData__Set_NID_ENGINE::_L3 */
  static NID_ENGINE _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  _L3 = in_NID_ENGINE;
  kcg_copy_TrainData_T(&_L2, &_L1);
  if (kcg_true) {
    _L2.nid_engine = _L3;
  }
  kcg_copy_TrainData_T(outTrainData, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_NID_ENGINE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


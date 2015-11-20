/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_L_TRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_L_TRAIN */
void TrainData__Set_L_TRAIN_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::in_L_TRAIN */ L_TRAIN in_L_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::_L2 */
  static L_TRAIN _L2;
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  _L2 = in_L_TRAIN;
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.l_train = _L2;
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_L_TRAIN_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


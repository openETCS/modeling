/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE */
void TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::in_M_LOADINGGAUGE */ M_LOADINGGAUGE in_M_LOADINGGAUGE,
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::_L2 */
  static M_LOADINGGAUGE _L2;
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  _L2 = in_M_LOADINGGAUGE;
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.m_loadinggauge = _L2;
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetTrainData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__GetTrainData */
void SessionManagement__GetTrainData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::_L2 */
  static TrainData_T _L2;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_TrainData_T(&_L2, &_L1.m_TrainData);
  kcg_copy_TrainData_T(outTrainData, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__GetTrainData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


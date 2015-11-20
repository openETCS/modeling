/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetTrainData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__SetTrainData */
void SessionManagement__SetTrainData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::_L2 */
  static SessionManagement_T _L2;
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_TrainData_T(&_L3, inTrainData);
  kcg_copy_SessionManagement_T(&_L2, &_L1);
  if (kcg_true) {
    kcg_copy_TrainData_T(&_L2.m_TrainData, &_L3);
  }
  kcg_copy_SessionManagement_T(outSessionManagement, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__SetTrainData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


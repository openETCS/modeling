/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers */
void TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inNumberOfOnboardPhoneNumbers */ kcg_int inNumberOfOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::_L2 */
  static kcg_int _L2;
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  _L2 = inNumberOfOnboardPhoneNumbers;
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    _L3.m_NumberOfOnboardPhoneNumbers = _L2;
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


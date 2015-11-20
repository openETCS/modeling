/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers */
void TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inOnboardPhoneNumbers */ aNID_RADIO_T_Packet_TrainTypes_Pkg *inOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::_L2 */
  static aNID_RADIO_T_Packet_TrainTypes_Pkg _L2;
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(&_L2, inOnboardPhoneNumbers);
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &_L3.m_OnboardPhoneNumbers,
      &_L2);
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


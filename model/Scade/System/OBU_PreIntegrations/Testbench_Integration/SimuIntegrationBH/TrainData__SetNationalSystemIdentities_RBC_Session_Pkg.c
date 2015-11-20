/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetNationalSystemIdentities_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities */
void TrainData__SetNationalSystemIdentities_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::inNationalSystemIdentity */ aNID_NTC_T_Packet_TrainTypes_Pkg *inNationalSystemIdentity,
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::_L2 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L2;
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&_L2, inNationalSystemIdentity);
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &_L3.m_NationalSystemIdentities,
      &_L2);
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetNationalSystemIdentities_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


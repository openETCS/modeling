/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetTractionIdentities_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetTractionIdentities */
void TrainData__SetTractionIdentities_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTractionIdentity */ aTractionIdentity_T_Packet_TrainTypes_Pkg *inTractionIdentity,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::_L1 */
  static TrainData_T _L1;
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::_L2 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L2;
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::_L3 */
  static TrainData_T _L3;
  
  kcg_copy_TrainData_T(&_L1, inTrainData);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(&_L2, inTractionIdentity);
  kcg_copy_TrainData_T(&_L3, &_L1);
  if (kcg_true) {
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &_L3.m_TractionIdentities,
      &_L2);
  }
  kcg_copy_TrainData_T(outTrainData, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetTractionIdentities_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers */
void TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inOnboardPhoneNumbers */aNID_RADIO_T_Packet_TrainTypes_Pkg *inOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &(*outTrainData).m_OnboardPhoneNumbers,
    inOnboardPhoneNumbers);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */


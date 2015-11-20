/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

void mapCMDToRTM_reset_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* 1 */ mapnewCMD_toCmd_reset_radioOutput_Pkg(&outC->Context_1);
}

/* radioOutput_Pkg::mapCMDToRTM */
void mapCMDToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapCMDToRTM::mobileConnectionCMD */mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapCMDToRTM::mobileRegistrationCMD */mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* 1 */
  mapnewCMD_toCmd_radioOutput_Pkg(
    mobileConnectionCMD,
    mobileRegistrationCMD,
    &outC->Context_1);
  outC->toRTM.valid = cmdr_not_relevant_API_RadioCommunication_Pkg !=
    outC->Context_1.toRTMCMD;
  outC->toRTM.cmd = outC->Context_1.toRTMCMD;
  outC->outRadio = outC->Context_1.outRadio;
  outC->outMN = outC->Context_1.outMN;
  if ((*mobileRegistrationCMD).valid) {
    outC->toRTM.networkID = (*mobileRegistrationCMD).network_id;
  }
  else if ((*mobileConnectionCMD).valid) {
    outC->toRTM.networkID = (*mobileConnectionCMD).nid_radio;
  }
  else {
    outC->toRTM.networkID = 0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapCMDToRTM_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


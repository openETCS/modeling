/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
}

/* radioOutput_Pkg::mapnewCMD_toCmd */
void mapnewCMD_toCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileConnectionCMD */mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileRegistrationCMD */mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO last_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN last_nidMN;
  /* radioOutput_Pkg::mapnewCMD_toCmd::doConnection */
  static kcg_bool doConnection;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_nidRadio = 0;
    last_nidMN = 0;
  }
  else {
    last_nidRadio = outC->outRadio;
    last_nidMN = outC->outMN;
  }
  doConnection = (*mobileConnectionCMD).valid & !(*mobileRegistrationCMD).valid;
  if (doConnection) {
    switch ((*mobileConnectionCMD).action) {
      case mca_connect_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_connection_request_API_RadioCommunication_Pkg;
        break;
      case mca_disconnect_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_disconnection_request_API_RadioCommunication_Pkg;
        break;
      
      default :
        outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    }
    outC->outMN = last_nidMN;
    outC->outRadio = (*mobileConnectionCMD).nid_radio;
  }
  else if ((*mobileRegistrationCMD).valid) {
    switch ((*mobileRegistrationCMD).action) {
      case mra_register_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_networkRegister_API_RadioCommunication_Pkg;
        break;
      case mra_unregister_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_networkUnregister_API_RadioCommunication_Pkg;
        break;
      
      default :
        outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    }
    outC->outMN = (*mobileRegistrationCMD).network_id;
    outC->outRadio = last_nidRadio;
  }
  else {
    outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    outC->outMN = last_nidMN;
    outC->outRadio = last_nidRadio;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapnewCMD_toCmd_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


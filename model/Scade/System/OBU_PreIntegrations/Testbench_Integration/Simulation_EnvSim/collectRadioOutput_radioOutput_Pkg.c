/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioOutput_radioOutput_Pkg.h"

void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ mapCMDToRTM_reset_radioOutput_Pkg(&outC->Context_1);
  /* 1 */ BufferOutput_reset_TM_lib_internal(&outC->_1_Context_1);
}

/* radioOutput_Pkg::collectRadioOutput */
void collectRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileRadioStatus */morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  if ((*mobileRadioStatus).session.valid) {
    outC->RTMisActive = (*mobileRadioStatus).session.phase !=
      sp_terminated_RCM_Session_Types_Pkg;
  }
  else if (outC->init) {
    outC->RTMisActive = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  BufferOutput_TM_lib_internal(
    MessageBus,
    outC->RTMisActive,
    &outC->_1_Context_1);
  /* 1 */
  patchMsgFlow_RadioSupport_Pkg(
    &outC->_1_Context_1.Out,
    insafeSessionEstablished,
    inModeAndLevel,
    &outC->toRBC);
  /* 1 */
  mapCMDToRTM_radioOutput_Pkg(
    mobileConnectionCMD,
    mobileRegistrationCMD,
    &outC->Context_1);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->Context_1.toRTM);
  outC->outRadio = outC->Context_1.outRadio;
  outC->outMN = outC->Context_1.outMN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectRadioOutput_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _collectRadioOutput_radioOutput_Pkg_H_
#define _collectRadioOutput_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"
#include "BufferOutput_TM_lib_internal.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* radioOutput_Pkg::collectRadioOutput::toRBC */ toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* radioOutput_Pkg::collectRadioOutput::API_RTM_management */ API_RTM_management;
  NID_RADIO /* radioOutput_Pkg::collectRadioOutput::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::collectRadioOutput::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* radioOutput_Pkg::collectRadioOutput::RTMisActive */ RTMisActive;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferOutput_TM_lib_internal /* 1 */ _1_Context_1;
  outC_mapCMDToRTM_radioOutput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_collectRadioOutput_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::collectRadioOutput */
extern void collectRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileRadioStatus */morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC);

extern void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC);

#endif /* _collectRadioOutput_radioOutput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectRadioOutput_radioOutput_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


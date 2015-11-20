/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "Read_P045_TM.h"
#include "RisingEdge_digital.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::lastReceivedRadioNetworkID */ lastReceivedRadioNetworkID;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationCmd */ mobileRegistrationCmd;
  mobileRegistrationContext_T_RCM_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationStatus */ mobileRegistrationStatus;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::p45_registrationOrderReceived_p */ p45_registrationOrderReceived_p;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* linear::Memory::_L8 */ _L8_1;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* linear::Memory::_L8 */ _L8_2;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* linear::Memory::_L8 */ _L8_4;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* linear::Memory::_L8 */ _L8_5;
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2_1;
  SSM_ST_Register_SM /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */ Register_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */ Register_SM_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */ Register_SM_reset_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::resetDelayedOrderFlag */ resetDelayedOrderFlag;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 8 */ Context_8;
  outC_FallingEdge_digital /* 1 */ Context_1;
  outC_RisingEdge_digital /* 7 */ Context_7;
  outC_RisingEdge_digital /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2 */
extern void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::p45_registrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


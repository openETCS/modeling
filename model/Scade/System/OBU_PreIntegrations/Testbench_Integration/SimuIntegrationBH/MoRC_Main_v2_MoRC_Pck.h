/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MoRC_Main_v2_MoRC_Pck_H_
#define _MoRC_Main_v2_MoRC_Pck_H_

#include "kcg_types.h"
#include "initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"
#include "requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgToTrack_T_RCM_MsgTypes_Pkg /* MoRC_Pck::MoRC_Main_v2::msgToRBC */ msgToRBC;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* MoRC_Pck::MoRC_Main_v2::msgToTrackTriggers */ msgToTrackTriggers;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::sendAPositionReport */ sendAPositionReport;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionSupported;
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::status */ status;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::safeRadioIndication */ safeRadioIndication;
  mobileConnectionCmd_T_RCM_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::mobileConnectionCmd */ mobileConnectionCmd;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::mobileRegistrationCmd */ mobileRegistrationCmd;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::lastReceivedRadioNetworkID */ lastReceivedRadioNetworkID;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::notReady */ notReady;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::p42_sessionManagementReceived_p */ p42_sessionManagementReceived_p;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::m32_SystemVersionReceived_p */ m32_SystemVersionReceived_p;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::m38_initiationOfACommunicationSessionMsgReceived_p */ m38_initiationOfACommunicationSessionMsgReceived_p;
  kcg_bool /* MoRC_Pck::MoRC_Main_v2::m39_AckOfTerminationOfACommunicationSessionReceived_p */ m39_AckOfTerminationOfACommunicationSessionReceived_p;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::connectionStatus_l */ connectionStatus_l;
  mobileRegistrationContext_T_RCM_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::registrationStatus_l */ registrationStatus_l;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::MoRC_Main_v2::sessionStatus_l */ sessionStatus_l;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _4_Context_1;
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _3_Context_1;
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _2_Context_1;
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _1_Context_1;
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_Main_v2_MoRC_Pck;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::MoRC_Main_v2 */
extern void MoRC_Main_v2_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main_v2::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* MoRC_Pck::MoRC_Main_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::MoRC_Main_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::MoRC_Main_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::MoRC_Main_v2::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main_v2::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::MoRC_Main_v2::mobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::MoRC_Main_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::MoRC_Main_v2::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main_v2::configData */ morc_configData_T_RCM_Session_Types_Pkg *configData,
  outC_MoRC_Main_v2_MoRC_Pck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoRC_Main_v2_reset_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoRC_Main_v2_init_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MoRC_Main_v2_MoRC_Pck_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_Main_v2_MoRC_Pck.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


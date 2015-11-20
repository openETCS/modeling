/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_out */ p42_SessionManagement_out;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m155_initiationOfACommunicationSession */ send_m155_initiationOfACommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m156_TerminationOfCommunicationSession */ send_m156_TerminationOfCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedReport;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m154_noCompatibleVersionSupported */ send_m154_noCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestSafeRadioConnectionSetup */ requestSafeRadioConnectionSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestReleaseOfSafeRadioConnection */ requestReleaseOfSafeRadioConnection;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus */ sessionStatus;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Session_SM /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */ Session_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */ Session_SM_reset_nxt;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */ sessionStatus_l;
  sessionCmd_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */ rem_sessionEstablishCmd;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _2_Context_1;
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _1_Context_1;
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
extern void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_in */p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m39_AckOfTerminationOfACommunicationSession */m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m32_SystemVersion */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::noOfRetriesOfSendingTerminationMessage */kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::maxWaitingTimeForAckMessageReceived */T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


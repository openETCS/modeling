/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::send_m156_TerminationOfCommunicationSession */ send_m156_TerminationOfCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::requestReleaseOfSafeRadioConnection */ requestReleaseOfSafeRadioConnection;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::terminated */ terminated;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::sessionStatus */ sessionStatus;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _7_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */ SM1_state_nxt;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L92 */ _L92;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
extern void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


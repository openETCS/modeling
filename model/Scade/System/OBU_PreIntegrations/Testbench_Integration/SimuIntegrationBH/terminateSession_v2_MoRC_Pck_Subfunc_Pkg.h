/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  sessionStatus_T_RCM_Session_Types_Pkg /* linear::MemoryBasic::_L4 */ _L4_1;
  _23_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */ SM1_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */ SM1_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
extern void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _terminateSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


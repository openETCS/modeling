/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::initiateTermination */ initiateTermination;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sendAPositionReport */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_TrainExitedFromRBCArea_SM /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
extern void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */ kcg_int noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg_H_
#define _terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::initiateTermination */ initiateTermination;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::initiateEstablishingNewSession */ initiateEstablishingNewSession;
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::newOrderToEstablishASession_out */ newOrderToEstablishASession_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _15_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */ SM1_state_nxt;
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::storedOrder */ storedOrder;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession */
extern void terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::newOrderToEstablishASession_in */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *newOrderToEstablishASession_in,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::sessionStatus */ sessionStatus_Type_Radio_Types_Pkg sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC);

extern void terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC);
extern void terminateAndEstablishSession_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */


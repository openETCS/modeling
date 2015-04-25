/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _maintaining_a_Session_MoRC_Pck_Subfunc_Pkg_H_
#define _maintaining_a_Session_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::tryToSetupANewSafeRadioConnection */ tryToSetupANewSafeRadioConnection;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::informTheDriverThatNoConnectionWasSetup */ informTheDriverThatNoConnectionWasSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::firstRequestToSetupASafeRadioConnection */ firstRequestToSetupASafeRadioConnection;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::finalAttemptToSetupTheSafeRadioConnectionFailed */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::requestsToSetupTheSafeRadioConnectionStopped */ requestsToSetupTheSafeRadioConnectionStopped;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
  SSM_ST_Maintaining_SM /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */ Maintaining_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session */
extern void maintaining_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::communicationSessionEstablished */ kcg_bool communicationSessionEstablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::safeRadioConnectionReestablished */ kcg_bool safeRadioConnectionReestablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::lossOfTheSafeRadioConnection */ kcg_bool lossOfTheSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::disconnectionHasNotBeenOrdered */ kcg_bool disconnectionHasNotBeenOrdered,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::actualTime */ time_Type_MoRC_Pck actualTime,
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

extern void maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC);
extern void maintaining_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _maintaining_a_Session_MoRC_Pck_Subfunc_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */


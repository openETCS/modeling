/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_maintaining_a_CommunicationSession_H_
#define _MoRC_maintaining_a_CommunicationSession_H_

#include "kcg_types.h"
#include "MoRC_countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* maintaining_a_CommunicationSession::tryToSetupANewSafeRadioConnection */ tryToSetupANewSafeRadioConnection;
  kcg_bool /* maintaining_a_CommunicationSession::informTheDriverThatNoConnectionWasSetup */ informTheDriverThatNoConnectionWasSetup;
  kcg_bool /* maintaining_a_CommunicationSession::firstRequestToSetupASafeRadioConnection */ firstRequestToSetupASafeRadioConnection;
  kcg_bool /* maintaining_a_CommunicationSession::finalAttemptToSetupTheSafeRadioConnectionFailed */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* maintaining_a_CommunicationSession::requestsToSetupTheSafeRadioConnectionStopped */ requestsToSetupTheSafeRadioConnectionStopped;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
  MoRC_SSM_ST_Maintaining_SM /* maintaining_a_CommunicationSession::Maintaining_SM */ Maintaining_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_maintaining_a_CommunicationSession;

/* ===========  node initialization and cycle functions  =========== */
/* maintaining_a_CommunicationSession */
extern void MoRC_maintaining_a_CommunicationSession(
  /* maintaining_a_CommunicationSession::communicationSessionEstablished */ kcg_bool communicationSessionEstablished,
  /* maintaining_a_CommunicationSession::safeRadioConnectionReestablished */ kcg_bool safeRadioConnectionReestablished,
  /* maintaining_a_CommunicationSession::lossOfTheSafeRadioConnection */ kcg_bool lossOfTheSafeRadioConnection,
  /* maintaining_a_CommunicationSession::disconnectionHasNotBeenOrdered */ kcg_bool disconnectionHasNotBeenOrdered,
  /* maintaining_a_CommunicationSession::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* maintaining_a_CommunicationSession::actualTime */ MoRC_time_Type actualTime,
  MoRC_outC_maintaining_a_CommunicationSession *outC);

extern void MoRC_maintaining_a_CommunicationSession_reset(
  MoRC_outC_maintaining_a_CommunicationSession *outC);
extern void MoRC_maintaining_a_CommunicationSession_init(
  MoRC_outC_maintaining_a_CommunicationSession *outC);

#endif /* _MoRC_maintaining_a_CommunicationSession_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_maintaining_a_CommunicationSession.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */


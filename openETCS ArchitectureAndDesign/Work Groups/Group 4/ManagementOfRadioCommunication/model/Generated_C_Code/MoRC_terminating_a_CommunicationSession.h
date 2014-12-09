/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_terminating_a_CommunicationSession_H_
#define _MoRC_terminating_a_CommunicationSession_H_

#include "kcg_types.h"
#include "MoRC_waitAndRepeatTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* terminating_a_CommunicationSession::sendATerminationOfCommunicationMessage */ sendATerminationOfCommunicationMessage;
  kcg_bool /* terminating_a_CommunicationSession::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  kcg_bool /* terminating_a_CommunicationSession::ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
  kcg_bool /* terminating_a_CommunicationSession::abortEstablishingACommunicationSession */ abortEstablishingACommunicationSession;
  kcg_bool /* terminating_a_CommunicationSession::communicationSessionTerminated */ communicationSessionTerminated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_TerminateTheCommunicationSession_SM /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ TerminateTheCommunicationSession_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_waitAndRepeatTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_terminating_a_CommunicationSession;

/* ===========  node initialization and cycle functions  =========== */
/* terminating_a_CommunicationSession */
extern void MoRC_terminating_a_CommunicationSession(
  /* terminating_a_CommunicationSession::initiateTermination */ kcg_bool initiateTermination,
  /* terminating_a_CommunicationSession::aSessionIsEstablished */ kcg_bool aSessionIsEstablished,
  /* terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */ kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */ kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* terminating_a_CommunicationSession::actualTime */ MoRC_time_Type actualTime,
  /* terminating_a_CommunicationSession::establishingACommunicationSessionAborted */ kcg_bool establishingACommunicationSessionAborted,
  MoRC_outC_terminating_a_CommunicationSession *outC);

extern void MoRC_terminating_a_CommunicationSession_reset(
  MoRC_outC_terminating_a_CommunicationSession *outC);
extern void MoRC_terminating_a_CommunicationSession_init(
  MoRC_outC_terminating_a_CommunicationSession *outC);

#endif /* _MoRC_terminating_a_CommunicationSession_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_terminating_a_CommunicationSession.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */


/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_initiateTerminatingASession_H_
#define _MoRC_initiateTerminatingASession_H_

#include "kcg_types.h"
#include "MoRC_waitAndRepeatTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* initiateTerminatingASession::initiateTermination */ initiateTermination;
  kcg_bool /* initiateTerminatingASession::sendAPositionReport */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_TrainExitedFromRBCArea_SM /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_waitAndRepeatTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_initiateTerminatingASession;

/* ===========  node initialization and cycle functions  =========== */
/* initiateTerminatingASession */
extern void MoRC_initiateTerminatingASession(
  /* initiateTerminatingASession::orderReceivedFromTrackside */ MoRC_orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* initiateTerminatingASession::errorConditionRequiringTerminationDetected */ kcg_bool errorConditionRequiringTerminationDetected,
  /* initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */ kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */ kcg_bool driverClosesTheDeskduringStartOfMission,
  /* initiateTerminatingASession::trainExitedFromAnRBCArea */ kcg_bool trainExitedFromAnRBCArea,
  /* initiateTerminatingASession::receivedOrderToTerminateTheSession */ MoRC_orderToContactAnRBC_Type *receivedOrderToTerminateTheSession,
  /* initiateTerminatingASession::actualTime */ MoRC_time_Type actualTime,
  /* initiateTerminatingASession::isInCommunicationSessionWithAnRIU */ kcg_bool isInCommunicationSessionWithAnRIU,
  /* initiateTerminatingASession::level_1_isLeft */ kcg_bool level_1_isLeft,
  /* initiateTerminatingASession::endOfMissionIsExecuted */ kcg_bool endOfMissionIsExecuted,
  MoRC_outC_initiateTerminatingASession *outC);

extern void MoRC_initiateTerminatingASession_reset(
  MoRC_outC_initiateTerminatingASession *outC);
extern void MoRC_initiateTerminatingASession_init(
  MoRC_outC_initiateTerminatingASession *outC);

#endif /* _MoRC_initiateTerminatingASession_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_initiateTerminatingASession.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */


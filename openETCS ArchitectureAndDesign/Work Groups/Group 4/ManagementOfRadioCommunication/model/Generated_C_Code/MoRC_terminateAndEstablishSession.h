/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_terminateAndEstablishSession_H_
#define _MoRC_terminateAndEstablishSession_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* terminateAndEstablishSession::initiateTermination */ initiateTermination;
  kcg_bool /* terminateAndEstablishSession::initiateEstablishingNewSession */ initiateEstablishingNewSession;
  MoRC_orderToContactAnRBC_Type /* terminateAndEstablishSession::newOrderToEstablishASession_out */ newOrderToEstablishASession_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_SM1 /* terminateAndEstablishSession::SM1 */ SM1_state_nxt;
  MoRC_orderToContactAnRBC_Type /* terminateAndEstablishSession::storedOrder */ storedOrder;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_terminateAndEstablishSession;

/* ===========  node initialization and cycle functions  =========== */
/* terminateAndEstablishSession */
extern void MoRC_terminateAndEstablishSession(
  /* terminateAndEstablishSession::newOrderToEstablishASession_in */ MoRC_orderToContactAnRBC_Type *newOrderToEstablishASession_in,
  /* terminateAndEstablishSession::sessionStatus */ MoRC_sessionStatus_Type sessionStatus,
  /* terminateAndEstablishSession::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  MoRC_outC_terminateAndEstablishSession *outC);

extern void MoRC_terminateAndEstablishSession_reset(
  MoRC_outC_terminateAndEstablishSession *outC);
extern void MoRC_terminateAndEstablishSession_init(
  MoRC_outC_terminateAndEstablishSession *outC);

#endif /* _MoRC_terminateAndEstablishSession_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_terminateAndEstablishSession.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */


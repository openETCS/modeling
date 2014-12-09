/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_safeRadioConnectionIndication_H_
#define _MoRC_safeRadioConnectionIndication_H_

#include "kcg_types.h"
#include "MoRC_countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_safeRadioConnectionStatusValid_Type /* safeRadioConnectionIndication::connectionStatus */ connectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_connectionStatus_SM /* safeRadioConnectionIndication::connectionStatus_SM */ connectionStatus_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_safeRadioConnectionIndication;

/* ===========  node initialization and cycle functions  =========== */
/* safeRadioConnectionIndication */
extern void MoRC_safeRadioConnectionIndication(
  /* safeRadioConnectionIndication::startOfMissionProcedureIsGoingOn */ kcg_bool startOfMissionProcedureIsGoingOn,
  /* safeRadioConnectionIndication::finalAttemptToSetupTheSafeRadioConnectionFailed */ kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped,
  /* safeRadioConnectionIndication::safeRadioConnection_Setup */ kcg_bool safeRadioConnection_Setup,
  /* safeRadioConnectionIndication::safeRadioConnection_Released */ kcg_bool safeRadioConnection_Released,
  /* safeRadioConnectionIndication::safeRadioConnection_Lost */ kcg_bool safeRadioConnection_Lost,
  /* safeRadioConnectionIndication::trainfrontIsInsideAnAnnouncedRadioHole */ kcg_bool trainfrontIsInsideAnAnnouncedRadioHole,
  /* safeRadioConnectionIndication::actualTime */ MoRC_time_Type actualTime,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromEstablishing */ kcg_bool firstRequestToSetupASafeRadioConnection_fromEstablishing,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromMaintaining */ kcg_bool firstRequestToSetupASafeRadioConnection_fromMaintaining,
  /* safeRadioConnectionIndication::connectionStatusTimerInterval */ MoRC_time_Type connectionStatusTimerInterval,
  MoRC_outC_safeRadioConnectionIndication *outC);

extern void MoRC_safeRadioConnectionIndication_reset(
  MoRC_outC_safeRadioConnectionIndication *outC);
extern void MoRC_safeRadioConnectionIndication_init(
  MoRC_outC_safeRadioConnectionIndication *outC);

#endif /* _MoRC_safeRadioConnectionIndication_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_safeRadioConnectionIndication.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */


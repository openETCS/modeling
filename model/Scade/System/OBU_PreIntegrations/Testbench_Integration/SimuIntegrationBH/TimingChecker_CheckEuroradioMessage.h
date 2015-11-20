/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TimingChecker_CheckEuroradioMessage_H_
#define _TimingChecker_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckEuroradioMessage::TimingChecker::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::sequenceError */ sequenceError;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::otherTimingError */ otherTimingError;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */ lastKnownTTrain;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TimingChecker_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::TimingChecker */
extern void TimingChecker_CheckEuroradioMessage(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TimingChecker_init_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TimingChecker_CheckEuroradioMessage_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TimingChecker_CheckEuroradioMessage.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _TimingChecker_H_
#define _TimingChecker_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TimingChecker::timingCheckResult */ timingCheckResult;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* TimingChecker::lastKnownTTrain */ lastKnownTTrain;
  kcg_bool /* TimingChecker::ignoreTimestamp */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TimingChecker;

/* ===========  node initialization and cycle functions  =========== */
/* TimingChecker */
extern void TimingChecker(
  /* TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* TimingChecker::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker *outC);

extern void TimingChecker_reset(outC_TimingChecker *outC);
extern void TimingChecker_init(outC_TimingChecker *outC);

#endif /* _TimingChecker_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TimingChecker.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */


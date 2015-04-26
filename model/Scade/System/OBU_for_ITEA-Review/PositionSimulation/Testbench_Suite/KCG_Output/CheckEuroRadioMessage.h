/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_H_
#define _CheckEuroRadioMessage_H_

#include "kcg_types.h"
#include "ConvertTrackSideMessageToRadioMessage.h"
#include "CheckAllowedPacketsRadio.h"
#include "CheckMandatoryVariablesAndMA.h"
#include "BuildOutput.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::checkedMessage */ checkedMessage;
  kcg_bool /* CheckEuroRadioMessage::radioSequenceError */ radioSequenceError;
  kcg_bool /* CheckEuroRadioMessage::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckEuroRadioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroRadioMessage */
extern void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  outC_CheckEuroRadioMessage *outC);

extern void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC);
extern void CheckEuroRadioMessage_init(outC_CheckEuroRadioMessage *outC);

#endif /* _CheckEuroRadioMessage_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckEuroRadioMessage.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */


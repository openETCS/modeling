/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_CheckEuroradioMessage_H_
#define _CheckEuroRadioMessage_CheckEuroradioMessage_H_

#include "kcg_types.h"
#include "ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"
#include "CheckMandatoryVariablesAndMA_CheckEuroradioMessage.h"
#include "BuildOutput_CheckEuroradioMessage.h"
#include "TimingChecker_CheckEuroradioMessage.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroradioMessage::CheckEuroRadioMessage::checkedMessage */ checkedMessage;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::radioSequenceError */ radioSequenceError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::otherTimingError */ otherTimingError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TimingChecker_CheckEuroradioMessage /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckEuroRadioMessage_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::CheckEuroRadioMessage */
extern void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */ kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckEuroRadioMessage_init_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckEuroRadioMessage_CheckEuroradioMessage_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckEuroRadioMessage_CheckEuroradioMessage.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


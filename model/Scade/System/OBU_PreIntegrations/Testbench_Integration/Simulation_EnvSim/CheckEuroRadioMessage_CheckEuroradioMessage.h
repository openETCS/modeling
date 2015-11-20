/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
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
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);

extern void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC);

#endif /* _CheckEuroRadioMessage_CheckEuroradioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage_CheckEuroradioMessage.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */


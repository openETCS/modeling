/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ContinuousTimeoutCheck_CheckEuroradioMessage_H_
#define _ContinuousTimeoutCheck_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckEuroradioMessage::ContinuousTimeoutCheck */
extern kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */ kcg_bool activateCheck,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus);

#endif /* _ContinuousTimeoutCheck_CheckEuroradioMessage_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ContinuousTimeoutCheck_CheckEuroradioMessage.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


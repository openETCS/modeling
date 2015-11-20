/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _ContinuousTimeoutCheck_CheckEuroradioMessage_H_
#define _ContinuousTimeoutCheck_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* CheckEuroradioMessage::ContinuousTimeoutCheck */
extern kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */kcg_bool activateCheck,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus);

#endif /* _ContinuousTimeoutCheck_CheckEuroradioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContinuousTimeoutCheck_CheckEuroradioMessage.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */


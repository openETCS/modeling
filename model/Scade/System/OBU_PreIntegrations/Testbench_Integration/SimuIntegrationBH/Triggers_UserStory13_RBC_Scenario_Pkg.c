/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory13_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_UserStory13_init_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_UserStory13_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_UserStory13 */
void Triggers_UserStory13_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::Triggers_UserStory13::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::Triggers_UserStory13::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::Triggers_UserStory13::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::Triggers_UserStory13::_L4 */
  static kcg_int _L4;
  /* RBC_Scenario_Pkg::Triggers_UserStory13::_L5 */
  static T_TRAIN _L5;
  
  _L2 = inLRBG;
  _L3 = inDistanceToLRBG;
  _L4 = inTriggerId;
  _L5 = inRBCTime;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L4,
    _L5,
    359,
    25.0,
    35.0,
    359000300,
    0.0,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  outC->outTriggerId = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_UserStory13_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


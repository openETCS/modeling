/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory13_RBC_Scenario_Pkg.h"

void Triggers_UserStory13_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}

/* RBC_Scenario_Pkg::Triggers_UserStory13 */
void Triggers_UserStory13_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    359,
    25.0,
    35.0,
    359000300,
    0.0,
    &outC->Context_1);
  outC->outTriggerId = outC->Context_1.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_UserStory13_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory16_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory16 */
kcg_int Triggers_UserStory16_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inRBCTime */T_TRAIN inRBCTime)
{
  /* RBC_Scenario_Pkg::Triggers_UserStory16::outTriggerId */
  static kcg_int outTriggerId;
  
  outTriggerId = inTriggerId;
  return outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_UserStory16_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


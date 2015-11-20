/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory14_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory14 */
kcg_int Triggers_UserStory14_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory14::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory14::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory14::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory14::inRBCTime */ T_TRAIN inRBCTime)
{
  static NID_LRBG noname;
  static kcg_real _1_noname;
  static T_TRAIN _2_noname;
  /* RBC_Scenario_Pkg::Triggers_UserStory14::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::Triggers_UserStory14::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::Triggers_UserStory14::_L4 */
  static kcg_int _L4;
  /* RBC_Scenario_Pkg::Triggers_UserStory14::_L5 */
  static T_TRAIN _L5;
  /* RBC_Scenario_Pkg::Triggers_UserStory14::outTriggerId */
  static kcg_int outTriggerId;
  
  _L2 = inLRBG;
  _L3 = inDistanceToLRBG;
  _L4 = inTriggerId;
  _L5 = inRBCTime;
  outTriggerId = _L4;
  noname = _L2;
  _1_noname = _L3;
  _2_noname = _L5;
  return outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_UserStory14_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


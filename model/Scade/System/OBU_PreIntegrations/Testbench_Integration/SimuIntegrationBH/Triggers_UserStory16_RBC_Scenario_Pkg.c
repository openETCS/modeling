/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_UserStory16_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::Triggers_UserStory16 */
kcg_int Triggers_UserStory16_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory16::inRBCTime */ T_TRAIN inRBCTime)
{
  static NID_LRBG noname;
  static kcg_real _1_noname;
  static T_TRAIN _2_noname;
  /* RBC_Scenario_Pkg::Triggers_UserStory16::_L9 */
  static kcg_int _L9;
  /* RBC_Scenario_Pkg::Triggers_UserStory16::_L8 */
  static NID_LRBG _L8;
  /* RBC_Scenario_Pkg::Triggers_UserStory16::_L7 */
  static T_TRAIN _L7;
  /* RBC_Scenario_Pkg::Triggers_UserStory16::_L6 */
  static kcg_real _L6;
  /* RBC_Scenario_Pkg::Triggers_UserStory16::outTriggerId */
  static kcg_int outTriggerId;
  
  _L6 = inDistanceToLRBG;
  _L7 = inRBCTime;
  _L9 = inTriggerId;
  outTriggerId = _L9;
  _L8 = inLRBG;
  noname = _L8;
  _1_noname = _L6;
  _2_noname = _L7;
  return outTriggerId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_UserStory16_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


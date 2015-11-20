/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet13_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet13_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_3);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_2);
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet13_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_3);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_2);
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet13 */
void Triggers_Sheet13_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L4 */
  static kcg_int _L4;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L5 */
  static T_TRAIN _L5;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L6 */
  static kcg_int _L6;
  /* RBC_Scenario_Pkg::Triggers_Sheet13::_L7 */
  static kcg_int _L7;
  
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
    420,
    164.4,
    174.4,
    420001694,
    0.0,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L1,
    _L5,
    421,
    45.0,
    55.0,
    421000500,
    0.0,
    &outC->Context_2);
  _L6 = outC->Context_2.outTriggerId;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L6,
    _L5,
    422,
    187.7,
    197.7,
    422001927,
    0.0,
    &outC->Context_3);
  _L7 = outC->Context_3.outTriggerId;
  outC->outTriggerId = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet13_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


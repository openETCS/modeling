/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08A_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet08A_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
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
void Triggers_Sheet08A_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
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

/* RBC_Scenario_Pkg::Triggers_Sheet08A */
void Triggers_Sheet08A_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L1 */
  static NID_LRBG _L1;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L2 */
  static kcg_real _L2;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L3 */
  static kcg_int _L3;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L4 */
  static T_TRAIN _L4;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L5 */
  static kcg_int _L5;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L6 */
  static kcg_int _L6;
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::_L7 */
  static kcg_int _L7;
  
  _L1 = inLRBG;
  _L2 = inDistanceToLRBG;
  _L3 = inTriggerId;
  _L4 = inRBCTime;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L3,
    _L4,
    374,
    173.9,
    183.9,
    374001789,
    0.0,
    &outC->Context_1);
  _L5 = outC->Context_1.outTriggerId;
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L5,
    _L4,
    375,
    49.4,
    59.4,
    375000544,
    0.0,
    &outC->Context_2);
  _L6 = outC->Context_2.outTriggerId;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L6,
    _L4,
    376,
    286.3,
    296.3,
    376002913,
    0.0,
    &outC->Context_3);
  _L7 = outC->Context_3.outTriggerId;
  outC->outTriggerId = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet08A_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


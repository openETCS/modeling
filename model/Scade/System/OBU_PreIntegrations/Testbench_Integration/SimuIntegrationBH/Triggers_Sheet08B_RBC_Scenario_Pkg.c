/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08B_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet08B_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_4);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet08B_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC)
{
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_4);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet08B */
void Triggers_Sheet08B_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L1 */
  static NID_LRBG _L1;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L2 */
  static kcg_real _L2;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L3 */
  static kcg_int _L3;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L4 */
  static T_TRAIN _L4;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L7 */
  static kcg_int _L7;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L8 */
  static kcg_int _L8;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L9 */
  static kcg_int _L9;
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::_L10 */
  static kcg_int _L10;
  
  _L1 = inLRBG;
  _L2 = inDistanceToLRBG;
  _L3 = inTriggerId;
  _L4 = inRBCTime;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L3,
    _L4,
    380,
    186.8,
    196.8,
    380001918,
    0.0,
    &outC->Context_3);
  _L7 = outC->Context_3.outTriggerId;
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L7,
    _L4,
    383,
    100.4,
    110.4,
    383001054,
    0.0,
    &outC->Context_4);
  _L8 = outC->Context_4.outTriggerId;
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L8,
    _L4,
    385,
    96.1,
    106.1,
    385001011,
    0.0,
    &outC->Context_5);
  _L9 = outC->Context_5.outTriggerId;
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L1,
    _L2,
    _L9,
    _L4,
    387,
    297.7,
    307.7,
    387003027,
    0.0,
    &outC->Context_6);
  _L10 = outC->Context_6.outTriggerId;
  outC->outTriggerId = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet08B_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08B_RBC_Scenario_Pkg.h"

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

/* RBC_Scenario_Pkg::Triggers_Sheet08B */
void Triggers_Sheet08B_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08B::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg *outC)
{
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    380,
    186.8,
    196.8,
    380001918,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    383,
    100.4,
    110.4,
    383001054,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    385,
    96.1,
    106.1,
    385001011,
    0.0,
    &outC->Context_5);
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_5.outTriggerId,
    inRBCTime,
    387,
    297.7,
    307.7,
    387003027,
    0.0,
    &outC->Context_6);
  outC->outTriggerId = outC->Context_6.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet08B_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


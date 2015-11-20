/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet14_RBC_Scenario_Pkg.h"

void Triggers_Sheet14_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet14_RBC_Scenario_Pkg *outC)
{
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_4);
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

/* RBC_Scenario_Pkg::Triggers_Sheet14 */
void Triggers_Sheet14_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet14::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet14_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    427,
    42.5,
    52.5,
    427000475,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    428,
    177.0,
    187.0,
    428001820,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    431,
    405.2,
    415.2,
    431004102,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    432,
    35.9,
    45.9,
    432000409,
    0.0,
    &outC->Context_4);
  outC->outTriggerId = outC->Context_4.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet14_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


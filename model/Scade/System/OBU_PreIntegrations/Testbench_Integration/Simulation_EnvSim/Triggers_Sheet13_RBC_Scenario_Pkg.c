/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet13_RBC_Scenario_Pkg.h"

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

/* RBC_Scenario_Pkg::Triggers_Sheet13 */
void Triggers_Sheet13_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet13::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet13_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    420,
    164.4,
    174.4,
    420001694,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    421,
    45.0,
    55.0,
    421000500,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    422,
    187.7,
    197.7,
    422001927,
    0.0,
    &outC->Context_3);
  outC->outTriggerId = outC->Context_3.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet13_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


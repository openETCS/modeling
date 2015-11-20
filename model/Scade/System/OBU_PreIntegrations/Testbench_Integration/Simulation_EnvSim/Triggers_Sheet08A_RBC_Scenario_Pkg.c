/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet08A_RBC_Scenario_Pkg.h"

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

/* RBC_Scenario_Pkg::Triggers_Sheet08A */
void Triggers_Sheet08A_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet08A::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    374,
    173.9,
    183.9,
    374001789,
    0.0,
    &outC->Context_1);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_1.outTriggerId,
    inRBCTime,
    375,
    49.4,
    59.4,
    375000544,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    376,
    286.3,
    296.3,
    376002913,
    0.0,
    &outC->Context_3);
  outC->outTriggerId = outC->Context_3.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet08A_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


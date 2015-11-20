/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet07_RBC_Scenario_Pkg.h"

void Triggers_Sheet07_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
{
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_4);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_3);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_2);
}

/* RBC_Scenario_Pkg::Triggers_Sheet07 */
void Triggers_Sheet07_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC)
{
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    371,
    19.1,
    29.1,
    371000241,
    0.0,
    &outC->Context_2);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    371,
    100.2,
    110.2,
    371001052,
    0.0,
    &outC->Context_3);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_3.outTriggerId,
    inRBCTime,
    371,
    158.4,
    168.4,
    371001634,
    0.0,
    &outC->Context_4);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_4.outTriggerId,
    inRBCTime,
    372,
    54.4,
    64.4,
    372000594,
    0.0,
    &outC->Context_5);
  outC->outTriggerId = outC->Context_5.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet07_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


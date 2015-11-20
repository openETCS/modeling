/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.h"

void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pk(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inRBCTime */T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    inTriggerId,
    inRBCTime,
    0,
    0.0,
    0.0,
    - 1,
    0.0,
    &outC->Context_1);
  outC->outTriggerId = outC->Context_1.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


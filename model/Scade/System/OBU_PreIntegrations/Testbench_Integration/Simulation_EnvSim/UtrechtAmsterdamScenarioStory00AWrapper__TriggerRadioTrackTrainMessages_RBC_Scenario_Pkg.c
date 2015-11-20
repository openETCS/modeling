/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h"

void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  /* 1 */ Triggers_UserStory13_reset_RBC_Scenario_Pkg(&outC->Context_1);
  /* 1 */ Triggers_Sheet14_reset_RBC_Scenario_Pkg(&outC->_1_Context_1);
  /* 1 */ Triggers_Sheet13_reset_RBC_Scenario_Pkg(&outC->_2_Context_1);
  /* 1 */ Triggers_Sheet12_reset_RBC_Scenario_Pkg(&outC->_3_Context_1);
  /* 1 */ Triggers_Sheet11_reset_RBC_Scenario_Pkg(&outC->_4_Context_1);
  /* 1 */ Triggers_Sheet09_reset_RBC_Scenario_Pkg(&outC->_5_Context_1);
  /* 2 */ Triggers_Sheet08B_reset_RBC_Scenario_Pkg(&outC->Context_2);
  /* 1 */ Triggers_Sheet08A_reset_RBC_Scenario_Pkg(&outC->_6_Context_1);
  /* 1 */ Triggers_Sheet07_reset_RBC_Scenario_Pkg(&outC->_7_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_P(
    &outC->_8_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pk(
    &outC->_9_Context_1);
}

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inRBCTime */T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    - 1,
    inRBCTime,
    &outC->_9_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_9_Context_1.outTriggerId,
    inRBCTime,
    &outC->_8_Context_1);
  /* 1 */
  Triggers_Sheet07_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_8_Context_1.outTriggerId,
    inRBCTime,
    &outC->_7_Context_1);
  /* 1 */
  Triggers_Sheet08A_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_7_Context_1.outTriggerId,
    inRBCTime,
    &outC->_6_Context_1);
  /* 2 */
  Triggers_Sheet08B_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_6_Context_1.outTriggerId,
    inRBCTime,
    &outC->Context_2);
  /* 1 */
  Triggers_Sheet09_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->Context_2.outTriggerId,
    inRBCTime,
    &outC->_5_Context_1);
  /* 1 */
  Triggers_Sheet11_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_5_Context_1.outTriggerId,
    inRBCTime,
    &outC->_4_Context_1);
  /* 1 */
  Triggers_Sheet12_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_4_Context_1.outTriggerId,
    inRBCTime,
    &outC->_3_Context_1);
  /* 1 */
  Triggers_Sheet13_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_3_Context_1.outTriggerId,
    inRBCTime,
    &outC->_2_Context_1);
  /* 1 */
  Triggers_Sheet14_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_2_Context_1.outTriggerId,
    inRBCTime,
    &outC->_1_Context_1);
  /* 1 */
  Triggers_UserStory13_RBC_Scenario_Pkg(
    inLRBG,
    inDistanceToLRBG,
    outC->_1_Context_1.outTriggerId,
    inRBCTime,
    &outC->Context_1);
  outC->outTriggerId = /* 1 */
    Triggers_UserStory16_RBC_Scenario_Pkg(
      inLRBG,
      inDistanceToLRBG,
      /* 1 */
      Triggers_UserStory15_RBC_Scenario_Pkg(
        inLRBG,
        inDistanceToLRBG,
        /* 1 */
        Triggers_UserStory14_RBC_Scenario_Pkg(
          inLRBG,
          inDistanceToLRBG,
          outC->Context_1.outTriggerId,
          inRBCTime),
        inRBCTime),
      inRBCTime);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


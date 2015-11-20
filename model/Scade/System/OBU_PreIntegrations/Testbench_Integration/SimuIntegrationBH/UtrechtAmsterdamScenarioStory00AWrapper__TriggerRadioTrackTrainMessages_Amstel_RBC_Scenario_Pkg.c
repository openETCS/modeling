/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pk(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::_L36 */
  static kcg_int _L36;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::_L37 */
  static T_TRAIN _L37;
  
  _L2 = inLRBG;
  _L3 = inDistanceToLRBG;
  _L36 = inTriggerId;
  _L37 = inRBCTime;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L36,
    _L37,
    0,
    0.0,
    0.0,
    - 1,
    0.0,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  outC->outTriggerId = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


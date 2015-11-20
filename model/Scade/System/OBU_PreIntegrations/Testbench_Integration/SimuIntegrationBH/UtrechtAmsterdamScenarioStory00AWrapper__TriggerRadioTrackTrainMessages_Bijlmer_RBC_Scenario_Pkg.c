/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_init_RBC_Scenario_Pk(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC)
{
  outC->outTriggerId = 0;
  /* 15 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_15);
  /* 14 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_14);
  /* 13 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_13);
  /* 12 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_12);
  /* 11 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_11);
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 17 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_17);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_4);
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
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_P(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC)
{
  /* 15 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_15);
  /* 14 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_14);
  /* 13 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_13);
  /* 12 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_12);
  /* 11 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_11);
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 17 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_17);
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
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L35 */
  static kcg_int _L35;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L36 */
  static kcg_int _L36;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L37 */
  static T_TRAIN _L37;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L38 */
  static kcg_int _L38;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L39 */
  static kcg_int _L39;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L40 */
  static kcg_int _L40;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L41 */
  static kcg_int _L41;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L46 */
  static kcg_int _L46;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L47 */
  static kcg_int _L47;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L48 */
  static kcg_int _L48;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L49 */
  static kcg_int _L49;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L50 */
  static kcg_int _L50;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::_L52 */
  static kcg_int _L52;
  
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
    354,
    270.3,
    280.3,
    354002753,
    0.0,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L1,
    _L37,
    351,
    49.9,
    59.9,
    351000549,
    0.0,
    &outC->Context_2);
  _L35 = outC->Context_2.outTriggerId;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L35,
    _L37,
    355,
    84.4,
    94.4,
    355000894,
    0.0,
    &outC->Context_3);
  _L38 = outC->Context_3.outTriggerId;
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L38,
    _L37,
    356,
    43.5,
    53.5,
    356000485,
    0.0,
    &outC->Context_4);
  _L39 = outC->Context_4.outTriggerId;
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L39,
    _L37,
    358,
    118.1,
    128.1,
    358001231,
    0.0,
    &outC->Context_5);
  _L40 = outC->Context_5.outTriggerId;
  /* 17 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L40,
    _L37,
    360,
    244.2,
    254.2,
    360002492,
    0.0,
    &outC->Context_17);
  _L52 = outC->Context_17.outTriggerId;
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L52,
    _L37,
    362,
    119.9,
    129.9,
    362001249,
    0.0,
    &outC->Context_6);
  _L41 = outC->Context_6.outTriggerId;
  /* 11 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L41,
    _L37,
    362,
    228.1,
    233.1,
    362002306,
    0.0,
    &outC->Context_11);
  _L46 = outC->Context_11.outTriggerId;
  /* 12 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L46,
    _L37,
    362,
    236.4,
    241.4,
    362002389,
    0.0,
    &outC->Context_12);
  _L47 = outC->Context_12.outTriggerId;
  /* 13 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L47,
    _L37,
    364,
    86.1,
    96.1,
    364000911,
    0.0,
    &outC->Context_13);
  _L48 = outC->Context_13.outTriggerId;
  /* 14 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L48,
    _L37,
    369,
    226.3,
    237.3,
    369002313,
    0.0,
    &outC->Context_14);
  _L49 = outC->Context_14.outTriggerId;
  /* 15 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L49,
    _L37,
    341,
    129.4,
    139.4,
    341001344,
    0.0,
    &outC->Context_15);
  _L50 = outC->Context_15.outTriggerId;
  outC->outTriggerId = _L50;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


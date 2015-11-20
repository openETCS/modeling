/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 1 */ Triggers_UserStory13_init_RBC_Scenario_Pkg(&outC->_9_Context_1);
  /* 1 */ Triggers_Sheet14_init_RBC_Scenario_Pkg(&outC->_8_Context_1);
  /* 1 */ Triggers_Sheet13_init_RBC_Scenario_Pkg(&outC->_7_Context_1);
  /* 1 */ Triggers_Sheet12_init_RBC_Scenario_Pkg(&outC->_6_Context_1);
  /* 1 */ Triggers_Sheet11_init_RBC_Scenario_Pkg(&outC->_5_Context_1);
  /* 1 */ Triggers_Sheet09_init_RBC_Scenario_Pkg(&outC->_4_Context_1);
  /* 2 */ Triggers_Sheet08B_init_RBC_Scenario_Pkg(&outC->Context_2);
  /* 1 */ Triggers_Sheet08A_init_RBC_Scenario_Pkg(&outC->_3_Context_1);
  /* 1 */ Triggers_Sheet07_init_RBC_Scenario_Pkg(&outC->_2_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_init_RBC_Scenario_Pk(
    &outC->_1_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  /* 1 */ Triggers_UserStory13_reset_RBC_Scenario_Pkg(&outC->_9_Context_1);
  /* 1 */ Triggers_Sheet14_reset_RBC_Scenario_Pkg(&outC->_8_Context_1);
  /* 1 */ Triggers_Sheet13_reset_RBC_Scenario_Pkg(&outC->_7_Context_1);
  /* 1 */ Triggers_Sheet12_reset_RBC_Scenario_Pkg(&outC->_6_Context_1);
  /* 1 */ Triggers_Sheet11_reset_RBC_Scenario_Pkg(&outC->_5_Context_1);
  /* 1 */ Triggers_Sheet09_reset_RBC_Scenario_Pkg(&outC->_4_Context_1);
  /* 2 */ Triggers_Sheet08B_reset_RBC_Scenario_Pkg(&outC->Context_2);
  /* 1 */ Triggers_Sheet08A_reset_RBC_Scenario_Pkg(&outC->_3_Context_1);
  /* 1 */ Triggers_Sheet07_reset_RBC_Scenario_Pkg(&outC->_2_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_P(
    &outC->_1_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pk(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages */
void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L35 */
  static kcg_int _L35;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L37 */
  static T_TRAIN _L37;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L38 */
  static kcg_int _L38;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L39 */
  static kcg_int _L39;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L40 */
  static kcg_int _L40;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L42 */
  static kcg_int _L42;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L43 */
  static kcg_int _L43;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L44 */
  static kcg_int _L44;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L45 */
  static kcg_int _L45;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L46 */
  static kcg_int _L46;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L47 */
  static kcg_int _L47;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L50 */
  static kcg_int _L50;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L51 */
  static kcg_int _L51;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L52 */
  static kcg_int _L52;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::_L53 */
  static kcg_int _L53;
  
  _L2 = inLRBG;
  _L3 = inDistanceToLRBG;
  _L38 = - 1;
  _L37 = inRBCTime;
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L38,
    _L37,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L1,
    _L37,
    &outC->_1_Context_1);
  _L35 = outC->_1_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet07_RBC_Scenario_Pkg(_L2, _L3, _L35, _L37, &outC->_2_Context_1);
  _L39 = outC->_2_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet08A_RBC_Scenario_Pkg(_L2, _L3, _L39, _L37, &outC->_3_Context_1);
  _L40 = outC->_3_Context_1.outTriggerId;
  /* 2 */
  Triggers_Sheet08B_RBC_Scenario_Pkg(_L2, _L3, _L40, _L37, &outC->Context_2);
  _L42 = outC->Context_2.outTriggerId;
  /* 1 */
  Triggers_Sheet09_RBC_Scenario_Pkg(_L2, _L3, _L42, _L37, &outC->_4_Context_1);
  _L43 = outC->_4_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet11_RBC_Scenario_Pkg(_L2, _L3, _L43, _L37, &outC->_5_Context_1);
  _L44 = outC->_5_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet12_RBC_Scenario_Pkg(_L2, _L3, _L44, _L37, &outC->_6_Context_1);
  _L45 = outC->_6_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet13_RBC_Scenario_Pkg(_L2, _L3, _L45, _L37, &outC->_7_Context_1);
  _L46 = outC->_7_Context_1.outTriggerId;
  /* 1 */
  Triggers_Sheet14_RBC_Scenario_Pkg(_L2, _L3, _L46, _L37, &outC->_8_Context_1);
  _L47 = outC->_8_Context_1.outTriggerId;
  /* 1 */
  Triggers_UserStory13_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L47,
    _L37,
    &outC->_9_Context_1);
  _L50 = outC->_9_Context_1.outTriggerId;
  _L51 = /* 1 */ Triggers_UserStory14_RBC_Scenario_Pkg(_L2, _L3, _L50, _L37);
  _L52 = /* 1 */ Triggers_UserStory15_RBC_Scenario_Pkg(_L2, _L3, _L51, _L37);
  _L53 = /* 1 */ Triggers_UserStory16_RBC_Scenario_Pkg(_L2, _L3, _L52, _L37);
  outC->outTriggerId = _L53;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


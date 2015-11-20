/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper */
void UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inClock */ Clock_T *inClock,
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L7 */
  static Clock_T _L7;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L8 */
  static PosData_T _L8;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L9 */
  static D_LRBG _L9;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L10 */
  static NID_LRBG _L10;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L11 */
  static Q_SCALE _L11;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L12 */
  static kcg_real _L12;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L13 */
  static kcg_int _L13;
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L14 */
  static T_TRAIN _L14;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_Clock_T(&_L7, inClock);
  /* 1 */ SessionManagement__GetPosData_RBC_Session_Pkg(&_L1, &_L8);
  _L9 = /* 1 */ PosData__Get_D_LRBG_RBC_Session_Pkg(&_L8);
  _L10 = /* 1 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&_L8);
  _L11 = /* 1 */ PosData__Get_Q_SCALE_RBC_Session_Pkg(&_L8);
  _L12 = /* 1 */
    LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg(_L9, _L11);
  _L14 = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(&_L7);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
    _L10,
    _L12,
    _L14,
    &outC->Context_1);
  _L13 = outC->Context_1.outTriggerId;
  outC->outTriggerId = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


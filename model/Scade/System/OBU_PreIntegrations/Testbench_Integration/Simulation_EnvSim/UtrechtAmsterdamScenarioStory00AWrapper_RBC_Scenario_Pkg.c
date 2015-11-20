/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h"

void UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper */
void UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inSessionManagement */SessionManagement_T *inSessionManagement,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inClock */Clock_T *inClock,
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::_L8 */
  static PosData_T _L8;
  
  /* 1 */
  SessionManagement__GetPosData_RBC_Session_Pkg(inSessionManagement, &_L8);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
    /* 1 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&_L8),
    /* 1 */
    LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg(
      /* 1 */ PosData__Get_D_LRBG_RBC_Session_Pkg(&_L8),
      /* 1 */ PosData__Get_Q_SCALE_RBC_Session_Pkg(&_L8)),
    /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(inClock),
    &outC->Context_1);
  outC->outTriggerId = outC->Context_1.outTriggerId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


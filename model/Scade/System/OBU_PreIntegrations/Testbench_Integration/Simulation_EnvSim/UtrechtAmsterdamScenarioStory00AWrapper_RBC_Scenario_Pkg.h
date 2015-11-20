/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "PosData__Get_D_LRBG_RBC_Session_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "PosData__Get_Q_SCALE_RBC_Session_Pkg.h"
#include "LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper */
extern void UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inSessionManagement */SessionManagement_T *inSessionManagement,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper::inClock */Clock_T *inClock,
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC);

extern void UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC);

#endif /* _UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


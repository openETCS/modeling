/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _Triggers_UserStory13_RBC_Scenario_Pkg_H_
#define _Triggers_UserStory13_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::Triggers_UserStory13::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Triggers_UserStory13_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_UserStory13 */
extern void Triggers_UserStory13_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_UserStory13::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC);

extern void Triggers_UserStory13_reset_RBC_Scenario_Pkg(
  outC_Triggers_UserStory13_RBC_Scenario_Pkg *outC);

#endif /* _Triggers_UserStory13_RBC_Scenario_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_UserStory13_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


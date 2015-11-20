/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _Triggers_Sheet09_RBC_Scenario_Pkg_H_
#define _Triggers_Sheet09_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::Triggers_Sheet09::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 2 */ Context_2;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 4 */ Context_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Triggers_Sheet09_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet09 */
extern void Triggers_Sheet09_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet09::inRBCTime */T_TRAIN inRBCTime,
  outC_Triggers_Sheet09_RBC_Scenario_Pkg *outC);

extern void Triggers_Sheet09_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet09_RBC_Scenario_Pkg *outC);

#endif /* _Triggers_Sheet09_RBC_Scenario_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Triggers_Sheet09_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


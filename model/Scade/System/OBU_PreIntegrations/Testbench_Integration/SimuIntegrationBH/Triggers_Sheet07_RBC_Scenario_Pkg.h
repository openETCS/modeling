/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Triggers_Sheet07_RBC_Scenario_Pkg_H_
#define _Triggers_Sheet07_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::Triggers_Sheet07::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 5 */ Context_5;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 4 */ Context_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Triggers_Sheet07_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet07 */
extern void Triggers_Sheet07_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet07_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet07_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet07_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Triggers_Sheet07_RBC_Scenario_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet07_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


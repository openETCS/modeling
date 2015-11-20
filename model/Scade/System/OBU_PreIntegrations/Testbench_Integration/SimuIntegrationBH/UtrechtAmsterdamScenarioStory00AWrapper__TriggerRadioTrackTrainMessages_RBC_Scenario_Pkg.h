/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "Triggers_UserStory14_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory15_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory16_RBC_Scenario_Pkg.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet07_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet08A_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet08B_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet09_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet11_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet12_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet13_RBC_Scenario_Pkg.h"
#include "Triggers_Sheet14_RBC_Scenario_Pkg.h"
#include "Triggers_UserStory13_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Triggers_UserStory13_RBC_Scenario_Pkg /* 1 */ _9_Context_1;
  outC_Triggers_Sheet14_RBC_Scenario_Pkg /* 1 */ _8_Context_1;
  outC_Triggers_Sheet13_RBC_Scenario_Pkg /* 1 */ _7_Context_1;
  outC_Triggers_Sheet12_RBC_Scenario_Pkg /* 1 */ _6_Context_1;
  outC_Triggers_Sheet11_RBC_Scenario_Pkg /* 1 */ _5_Context_1;
  outC_Triggers_Sheet09_RBC_Scenario_Pkg /* 1 */ _4_Context_1;
  outC_Triggers_Sheet08B_RBC_Scenario_Pkg /* 2 */ Context_2;
  outC_Triggers_Sheet08A_RBC_Scenario_Pkg /* 1 */ _3_Context_1;
  outC_Triggers_Sheet07_RBC_Scenario_Pkg /* 1 */ _2_Context_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk /* 1 */ _1_Context_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages */
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


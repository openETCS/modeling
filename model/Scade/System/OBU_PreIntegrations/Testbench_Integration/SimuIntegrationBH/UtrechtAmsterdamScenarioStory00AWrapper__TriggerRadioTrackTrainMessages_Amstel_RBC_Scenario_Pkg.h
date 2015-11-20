/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel */
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel::inRBCTime */ T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_reset_RBC_Scenario_Pk(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Amstel_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_
#define _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 1 */ Context_1;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 2 */ Context_2;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 4 */ Context_4;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 5 */ Context_5;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 17 */ Context_17;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 6 */ Context_6;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 11 */ Context_11;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 12 */ Context_12;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 13 */ Context_13;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 14 */ Context_14;
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg /* 15 */ Context_15;
  /* ----------------- no clocks of observable data ------------------ */
} outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer */
extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer::inRBCTime */T_TRAIN inRBCTime,
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC);

extern void UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_reset_RBC_Scenario_P(
  outC_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pk *outC);

#endif /* _UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_Bijlmer_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


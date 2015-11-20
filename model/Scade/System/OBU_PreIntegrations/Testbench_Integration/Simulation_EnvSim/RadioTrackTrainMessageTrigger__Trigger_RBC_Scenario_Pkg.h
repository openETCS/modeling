/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_
#define _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */ valid;
  kcg_bool /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */ setReferenceTime;
  T_TRAIN /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */ referenceTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger */
extern void RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inRBCTime */T_TRAIN inRBCTime,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBGTrigger */NID_LRBG inLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMinDistanceToLRBGTrigger */kcg_real inMinDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMaxDistanceToLRBGTrigger */kcg_real inMaxDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerIdHidden */kcg_int inTriggerIdHidden,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inActivatorTimeout */kcg_real inActivatorTimeout,
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC);

extern void RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC);

#endif /* _RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

void RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger */
void RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBG */NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inDistanceToLRBG */kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerId */kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inRBCTime */T_TRAIN inRBCTime,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBGTrigger */NID_LRBG inLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMinDistanceToLRBGTrigger */kcg_real inMinDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMaxDistanceToLRBGTrigger */kcg_real inMaxDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerIdHidden */kcg_int inTriggerIdHidden,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inActivatorTimeout */kcg_real inActivatorTimeout,
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN last_referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool last_setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool last_valid;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::activatorTimeout */
  static T_TRAIN activatorTimeout;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_valid = kcg_true;
    last_setReferenceTime = kcg_true;
    last_referenceTime = 0;
  }
  else {
    last_referenceTime = outC->referenceTime;
    last_setReferenceTime = outC->setReferenceTime;
    last_valid = outC->valid;
  }
  activatorTimeout = (kcg_int) inActivatorTimeout;
  IfBlock1_clock = (inLRBG == inLRBGTrigger) & (inMinDistanceToLRBGTrigger >=
      0.0) & (inMaxDistanceToLRBGTrigger >= 0.0) & (inMaxDistanceToLRBGTrigger >
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG >=
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG <
      inMaxDistanceToLRBGTrigger) & last_valid;
  if (IfBlock1_clock) {
    if (last_setReferenceTime) {
      outC->referenceTime = inRBCTime;
      outC->setReferenceTime = kcg_false;
    }
    else {
      outC->referenceTime = last_referenceTime;
      outC->setReferenceTime = last_setReferenceTime;
    }
    IfBlock3_clock_IfBlock1 = (activatorTimeout <= 0) | ((activatorTimeout >
          0) & (inRBCTime - outC->referenceTime >= activatorTimeout));
    if (IfBlock3_clock_IfBlock1) {
      outC->valid = kcg_false;
      outC->outTriggerId = inTriggerIdHidden;
    }
    else {
      outC->outTriggerId = inTriggerId;
      outC->valid = last_valid;
    }
  }
  else {
    outC->outTriggerId = inTriggerId;
    outC->valid = last_valid;
    outC->setReferenceTime = last_setReferenceTime;
    outC->referenceTime = last_referenceTime;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */


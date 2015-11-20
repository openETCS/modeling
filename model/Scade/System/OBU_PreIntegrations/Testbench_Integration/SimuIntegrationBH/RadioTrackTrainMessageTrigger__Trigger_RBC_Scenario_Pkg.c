/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC)
{
  outC->init = kcg_true;
  outC->referenceTime = 0;
  outC->setReferenceTime = kcg_true;
  outC->valid = kcg_true;
  outC->outTriggerId = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger */
void RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inRBCTime */ T_TRAIN inRBCTime,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inLRBGTrigger */ NID_LRBG inLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMinDistanceToLRBGTrigger */ kcg_real inMinDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inMaxDistanceToLRBGTrigger */ kcg_real inMaxDistanceToLRBGTrigger,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inTriggerIdHidden */ kcg_int inTriggerIdHidden,
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::inActivatorTimeout */ kcg_real inActivatorTimeout,
  outC_RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN _4_referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool _3_setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool valid2;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */
  static kcg_int _1_outTriggerId;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool _9_setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN _10_referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock2::then::_L3 */
  static T_TRAIN _L3_IfBlock1_IfBlock2;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock2::then::_L1 */
  static kcg_bool _L1_IfBlock1_IfBlock2;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool _11_setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN _12_referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3::else::_L2 */
  static kcg_int _L2_IfBlock1_IfBlock3;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */
  static kcg_int _5_outTriggerId;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool valid6;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3::then::_L17 */
  static kcg_bool _L17_IfBlock1_IfBlock3;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::then::IfBlock3::then::_L10 */
  static kcg_int _L10_IfBlock1_IfBlock3;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */
  static kcg_int _7_outTriggerId;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool valid8;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::referenceTime */
  static T_TRAIN referenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::setReferenceTime */
  static kcg_bool setReferenceTime;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::valid */
  static kcg_bool valid;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::outTriggerId */
  static kcg_int outTriggerId;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::IfBlock1::else::_L2 */
  static kcg_int _L2_IfBlock1;
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
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::_L5 */
  static kcg_real _L5;
  /* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger::_L6 */
  static kcg_int _L6;
  
  /* last_init_ck_valid */ if (outC->init) {
    last_valid = kcg_true;
  }
  else {
    last_valid = outC->valid;
  }
  IfBlock1_clock = (inLRBG == inLRBGTrigger) & (inMinDistanceToLRBGTrigger >=
      0.0) & (inMaxDistanceToLRBGTrigger >= 0.0) & (inMaxDistanceToLRBGTrigger >
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG >=
      inMinDistanceToLRBGTrigger) & (inDistanceToLRBG <
      inMaxDistanceToLRBGTrigger) & last_valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _L2_IfBlock1 = inTriggerId;
    outTriggerId = _L2_IfBlock1;
  }
  _L5 = inActivatorTimeout;
  _L6 = (kcg_int) _L5;
  activatorTimeout = _L6;
  /* last_init_ck_setReferenceTime */ if (outC->init) {
    last_setReferenceTime = kcg_true;
  }
  else {
    last_setReferenceTime = outC->setReferenceTime;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    IfBlock2_clock_IfBlock1 = last_setReferenceTime;
  }
  /* last_init_ck_referenceTime */ if (outC->init) {
    last_referenceTime = 0;
  }
  else {
    last_referenceTime = outC->referenceTime;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      _L3_IfBlock1_IfBlock2 = inRBCTime;
      _12_referenceTime = _L3_IfBlock1_IfBlock2;
      _4_referenceTime = _12_referenceTime;
    }
    else {
      _10_referenceTime = last_referenceTime;
      _4_referenceTime = _10_referenceTime;
    }
    IfBlock3_clock_IfBlock1 = (activatorTimeout <= 0) | ((activatorTimeout >
          0) & (inRBCTime - _4_referenceTime >= activatorTimeout));
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      _L10_IfBlock1_IfBlock3 = inTriggerIdHidden;
      _7_outTriggerId = _L10_IfBlock1_IfBlock3;
      _1_outTriggerId = _7_outTriggerId;
    }
    else {
      _L2_IfBlock1_IfBlock3 = inTriggerId;
      _5_outTriggerId = _L2_IfBlock1_IfBlock3;
      _1_outTriggerId = _5_outTriggerId;
    }
    outC->outTriggerId = _1_outTriggerId;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      _L17_IfBlock1_IfBlock3 = kcg_false;
      valid8 = _L17_IfBlock1_IfBlock3;
      valid2 = valid8;
    }
    else {
      valid6 = last_valid;
      valid2 = valid6;
    }
    outC->valid = valid2;
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      _L1_IfBlock1_IfBlock2 = kcg_false;
      _11_setReferenceTime = _L1_IfBlock1_IfBlock2;
      _3_setReferenceTime = _11_setReferenceTime;
    }
    else {
      _9_setReferenceTime = last_setReferenceTime;
      _3_setReferenceTime = _9_setReferenceTime;
    }
    outC->setReferenceTime = _3_setReferenceTime;
    outC->referenceTime = _4_referenceTime;
  }
  else {
    outC->outTriggerId = outTriggerId;
    valid = last_valid;
    outC->valid = valid;
    setReferenceTime = last_setReferenceTime;
    outC->setReferenceTime = setReferenceTime;
    referenceTime = last_referenceTime;
    outC->referenceTime = referenceTime;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


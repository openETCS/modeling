/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Triggers_Sheet11_RBC_Scenario_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Triggers_Sheet11_init_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
{
  outC->outTriggerId = 0;
  /* 10 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_10);
  /* 9 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_9);
  /* 8 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_8);
  /* 7 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_7);
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_4);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_3);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_2);
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_init_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Triggers_Sheet11_reset_RBC_Scenario_Pkg(
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
{
  /* 10 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_10);
  /* 9 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_9);
  /* 8 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_8);
  /* 7 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_7);
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_6);
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_5);
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_4);
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_3);
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_2);
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Scenario_Pkg::Triggers_Sheet11 */
void Triggers_Sheet11_RBC_Scenario_Pkg(
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet11::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet11_RBC_Scenario_Pkg *outC)
{
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L1 */
  static kcg_int _L1;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L2 */
  static NID_LRBG _L2;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L3 */
  static kcg_real _L3;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L4 */
  static kcg_int _L4;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L5 */
  static T_TRAIN _L5;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L6 */
  static kcg_int _L6;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L7 */
  static kcg_int _L7;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L8 */
  static kcg_int _L8;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L9 */
  static kcg_int _L9;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L10 */
  static kcg_int _L10;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L11 */
  static kcg_int _L11;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L12 */
  static kcg_int _L12;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L13 */
  static kcg_int _L13;
  /* RBC_Scenario_Pkg::Triggers_Sheet11::_L14 */
  static kcg_int _L14;
  
  _L2 = inLRBG;
  _L3 = inDistanceToLRBG;
  _L4 = inTriggerId;
  _L5 = inRBCTime;
  /* 1 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L4,
    _L5,
    397,
    164.2,
    174.2,
    397001692,
    0.0,
    &outC->Context_1);
  _L1 = outC->Context_1.outTriggerId;
  /* 2 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L1,
    _L5,
    397,
    377.0,
    387.0,
    397003820,
    0.0,
    &outC->Context_2);
  _L6 = outC->Context_2.outTriggerId;
  /* 3 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L6,
    _L5,
    400,
    101.0,
    111.0,
    400001060,
    0.0,
    &outC->Context_3);
  _L7 = outC->Context_3.outTriggerId;
  /* 4 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L7,
    _L5,
    400,
    366.2,
    376.2,
    400003712,
    0.0,
    &outC->Context_4);
  _L8 = outC->Context_4.outTriggerId;
  /* 5 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L8,
    _L5,
    401,
    177.7,
    187.7,
    401001827,
    0.0,
    &outC->Context_5);
  _L9 = outC->Context_5.outTriggerId;
  /* 6 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L9,
    _L5,
    402,
    58.3,
    68.3,
    402000633,
    0.0,
    &outC->Context_6);
  _L10 = outC->Context_6.outTriggerId;
  /* 7 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L10,
    _L5,
    404,
    179.4,
    189.4,
    404001844,
    0.0,
    &outC->Context_7);
  _L11 = outC->Context_7.outTriggerId;
  /* 8 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L11,
    _L5,
    405,
    37.2,
    47.2,
    405000422,
    0.0,
    &outC->Context_8);
  _L12 = outC->Context_8.outTriggerId;
  /* 9 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L12,
    _L5,
    407,
    162.3,
    172.3,
    407001673,
    0.0,
    &outC->Context_9);
  _L13 = outC->Context_9.outTriggerId;
  /* 10 */
  RadioTrackTrainMessageTrigger__Trigger_RBC_Scenario_Pkg(
    _L2,
    _L3,
    _L13,
    _L5,
    408,
    45.9,
    55.9,
    408000509,
    0.0,
    &outC->Context_10);
  _L14 = outC->Context_10.outTriggerId;
  outC->outTriggerId = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet11_RBC_Scenario_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


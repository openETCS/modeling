/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "combineForLevelChange_xdebugSupport_Pkg.h"

void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::combineForLevelChange */
void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* xdebugSupport_Pkg::combineForLevelChange::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  static M_LEVEL tmp2;
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg last_infoForLevelTransition;
  /* xdebugSupport_Pkg::combineForLevelChange::_L108 */
  static kcg_bool _L108;
  
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML.P_12,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_xdebugSupport_Pkg);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML.P_135,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_xdebugSupport_Pkg);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML.P_63,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_xdebugSupport_Pkg);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML.P_80,
    (P80_ModeProfiles_T_Packet_Types_Pkg *)
      &Default_P80_legacy_xdebugSupport_Pkg);
  if ((*actualMessage).valid) {
  }
  else {
    if (outC->init) {
      tmp2 = M_LEVEL_Level_0;
    }
    else {
      tmp2 = outC->rem_level;
    }
    tmp1 = ((*ModeLevel).level != tmp2) | transitionPositionPassed;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_true;
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &last_infoForLevelTransition,
      (dataCollectionForLevelTransition_T_xdebugSupport_Pkg *)
        &cNoML_xdebugSupport_Pkg);
  }
  else {
    tmp = outC->rem_LRBGpositionNeeded;
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &last_infoForLevelTransition,
      &outC->infoForLevelTransition);
  }
  if ((*actualMessage).valid) {
    /* dataForLevelTransition */
    dataForLevelTransition_xdebugSupport_Pkg(
      actualMessage,
      &last_infoForLevelTransition,
      trainPosition,
      tmp,
      (*ModeLevel).level,
      trainProperties,
      &outC->infoForLevelTransition,
      &outC->rem_LRBGpositionNeeded);
  }
  else if (tmp1) {
    outC->rem_LRBGpositionNeeded = kcg_false;
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->infoForLevelTransition,
      (dataCollectionForLevelTransition_T_xdebugSupport_Pkg *)
        &cNoML_xdebugSupport_Pkg);
  }
  else {
    outC->rem_LRBGpositionNeeded = tmp;
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->infoForLevelTransition,
      &last_infoForLevelTransition);
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML.P_46,
    &outC->infoForLevelTransition.p46);
  outC->Data_to_From_Track_Packets_at_ML.LRBG =
    outC->infoForLevelTransition.LRBG;
  outC->Data_to_From_Track_Packets_at_ML.referenceLocation =
    outC->infoForLevelTransition.referenceLocation;
  outC->forLevelManagement.P12_received =
    outC->infoForLevelTransition.p12_received;
  outC->forLevelManagement.P15_received =
    outC->infoForLevelTransition.p15_received;
  outC->forLevelManagement.P21_received =
    outC->infoForLevelTransition.p21_received;
  outC->forLevelManagement.P27_received =
    outC->infoForLevelTransition.p27_received;
  if (outC->infoForLevelTransition.p41[0].valid) {
    tmp1 = outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_2;
    tmp = outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_3;
  }
  else {
    tmp = kcg_false;
    tmp1 = kcg_false;
  }
  _L108 = tmp1 | tmp;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->outFilterEvents,
    inFilterEvents);
  outC->outFilterEvents.pendingL12L3Transition = _L108;
  outC->outFilterEvents.SPPAndGradientOnBoard = _L108;
  if (outC->infoForLevelTransition.p41[0].valid) {
    outC->outFilterEvents.pendingL1Transition =
      outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_1;
  }
  else {
    outC->outFilterEvents.pendingL1Transition = kcg_false;
  }
  /* 1 */
  Read_P137_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_137);
  /* 1 */
  Read_P138_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_138);
  /* 1 */
  Read_P139_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_139);
  /* 1 */
  Read_P015_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_15);
  /* 1 */
  Read_P021_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_21);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_ML.P_27);
  if (outC->rem_LRBGpositionNeeded) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->Data_to_From_Track_Packets_at_ML.P_41,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &cNoP41_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->Data_to_From_Track_Packets_at_ML.P_41,
      &outC->infoForLevelTransition.p41);
  }
  outC->rem_level = (*ModeLevel).level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** combineForLevelChange_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


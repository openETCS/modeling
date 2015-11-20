/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _combineForLevelChange_xdebugSupport_Pkg_H_
#define _combineForLevelChange_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Read_P012_TM.h"
#include "Read_P135_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::forLevelManagement */ forLevelManagement;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */ infoForLevelTransition;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::level */ level;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */ LRBGpositionNeeded;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_dataForLevelTransition_xdebugSupport_Pkg /* dataForLevelTransition */ Context_dataForLevelTransition;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainProperties_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L37 */ _L37_IfBlock1;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L36 */ _L36_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L35 */ _L35_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L34 */ _L34_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L33 */ _L33_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L32 */ _L32_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L31 */ _L31_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else */ else_clock_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::else::_L4 */ _L4_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::else::_L5 */ _L5_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::then::_L9 */ _L9_IfBlock1;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::msgToCheck */ msgToCheck;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::doReset */ doReset;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::p41valid */ p41valid;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L12 */ _L12;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L31 */ _L31;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L37 */ _L37;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::_L38 */ _L38;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::_L39 */ _L39;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::_L40 */ _L40;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L41 */ _L41;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L42 */ _L42;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L43 */ _L43;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L115 */ _L115;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L114 */ _L114;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L113 */ _L113;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L112 */ _L112;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L111 */ _L111;
  kcg_int /* xdebugSupport_Pkg::combineForLevelChange::_L110 */ _L110;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L109 */ _L109;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L108 */ _L108;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L107 */ _L107;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L106 */ _L106;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L105 */ _L105;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L104 */ _L104;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L103 */ _L103;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L102 */ _L102;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L101 */ _L101;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L100 */ _L100;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L99 */ _L99;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L98 */ _L98;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L97 */ _L97;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L96 */ _L96;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L95 */ _L95;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L94 */ _L94;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L93 */ _L93;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L92 */ _L92;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L91 */ _L91;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L90 */ _L90;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L89 */ _L89;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L88 */ _L88;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L87 */ _L87;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L86 */ _L86;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L85 */ _L85;
  M_LEVELTR /* xdebugSupport_Pkg::combineForLevelChange::_L84 */ _L84;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L83 */ _L83;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L137 */ _L137;
  P21_GradientProfiles_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L136 */ _L136;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L134 */ _L134;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L131 */ _L131;
  P135_OBU_T_TM /* xdebugSupport_Pkg::combineForLevelChange::_L132 */ _L132;
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L130 */ _L130;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L129 */ _L129;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L128 */ _L128;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L127 */ _L127;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L125 */ _L125;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L124 */ _L124;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L123 */ _L123;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L122 */ _L122;
  P80_ModeProfiles_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L120 */ _L120;
  CompressedPackets_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L119 */ _L119;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L116 */ _L116;
  P012_OBU_T_TM /* xdebugSupport_Pkg::combineForLevelChange::_L117 */ _L117;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L138 */ _L138;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L139 */ _L139;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L140 */ _L140;
  NID_LRBG /* xdebugSupport_Pkg::combineForLevelChange::_L141 */ _L141;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L143 */ _L143;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L144 */ _L144;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L145 */ _L145;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::_L146 */ _L146;
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::_L147 */ _L147;
} outC_combineForLevelChange_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::combineForLevelChange */
extern void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* xdebugSupport_Pkg::combineForLevelChange::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void combineForLevelChange_init_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _combineForLevelChange_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** combineForLevelChange_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


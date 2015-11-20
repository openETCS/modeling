/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _dataForLevelTransition_xdebugSupport_Pkg_H_
#define _dataForLevelTransition_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"
#include "getP41Level_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::outstoredData */ outstoredData;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */ outPositionNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_packetValid_xdebugSupport_Pkg /* 2 */ _4_Context_2;
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg /* 1 */ _3_Context_1;
  outC_checkNTCPriority_xdebugSupport_Pkg /* 2 */ Context_2;
  outC_getLRBGFromMsg_xdebugSupport_Pkg /* 1 */ _2_Context_1;
  outC_getP41Level_xdebugSupport_Pkg /* 1 */ _1_Context_1;
  outC_packetValid_xdebugSupport_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition */ ck_every;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition */ _5_ck_every;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition */ _6_ck_every;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition */ _7_ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::p41Valid */ p41Valid;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::p46Valid */ p46Valid;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::ntcRequested */ ntcRequested;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L2 */ _L2;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L3 */ _L3;
  P015_OBU_T_TM /* xdebugSupport_Pkg::dataForLevelTransition::_L4 */ _L4;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L10 */ _L10;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L11 */ _L11;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L13 */ _L13;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L18 */ _L18;
  CompressedPackets_T_Common_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L19 */ _L19;
  P021_OBU_T_TM /* xdebugSupport_Pkg::dataForLevelTransition::_L21 */ _L21;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L20 */ _L20;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L23 */ _L23;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L24 */ _L24;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L25 */ _L25;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L26 */ _L26;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L27 */ _L27;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L28 */ _L28;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L29 */ _L29;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L30 */ _L30;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L31 */ _L31;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L32 */ _L32;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L33 */ _L33;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L35 */ _L35;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L36 */ _L36;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L38 */ _L38;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L40 */ _L40;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L43 */ _L43;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L46 */ _L46;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L47 */ _L47;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L48 */ _L48;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L49 */ _L49;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L54 */ _L54;
  NID_LRBG /* xdebugSupport_Pkg::dataForLevelTransition::_L55 */ _L55;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L59 */ _L59;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L61 */ _L61;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L60 */ _L60;
  trainPosition_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::dataForLevelTransition::_L62 */ _L62;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L63 */ _L63;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L65 */ _L65;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L66 */ _L66;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L68 */ _L68;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L69 */ _L69;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L71 */ _L71;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L73 */ _L73;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L74 */ _L74;
  Metadata_T_Common_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L75 */ _L75;
  NID_PACKET /* xdebugSupport_Pkg::dataForLevelTransition::_L76 */ _L76;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L77 */ _L77;
  NID_PACKET /* xdebugSupport_Pkg::dataForLevelTransition::_L78 */ _L78;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L83 */ _L83;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L84 */ _L84;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L85 */ _L85;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L86 */ _L86;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L87 */ _L87;
  NID_LRBG /* xdebugSupport_Pkg::dataForLevelTransition::_L116 */ _L116;
  M_LEVEL /* xdebugSupport_Pkg::dataForLevelTransition::_L117 */ _L117;
  M_LEVEL /* xdebugSupport_Pkg::dataForLevelTransition::_L119 */ _L119;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L120 */ _L120;
  kcg_bool /* xdebugSupport_Pkg::dataForLevelTransition::_L121 */ _L121;
  M_LEVEL /* xdebugSupport_Pkg::dataForLevelTransition::_L122 */ _L122;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L123 */ _L123;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::dataForLevelTransition::_L124 */ _L124;
  trainProperties_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::dataForLevelTransition::_L125 */ _L125;
} outC_dataForLevelTransition_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::dataForLevelTransition */
extern void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */ dataCollectionForLevelTransition_T_xdebugSupport_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dataForLevelTransition_reset_xdebugSupport_Pkg(
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dataForLevelTransition_init_xdebugSupport_Pkg(
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _dataForLevelTransition_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** dataForLevelTransition_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _calculateTrainPosition_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPosition_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "calculateTrainpositionAtt_CalculateTrainPosition_Pkg.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPosition */ trainPosition;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ BGs_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg /* 1 */ _5_Context_1;
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg /* 1 */ _4_Context_1;
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* 2 */ _3_Context_2;
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg /* 1 */ _2_Context_1;
  outC_delDispensableBGs_CalculateTrainPosition_Pkg /* 2 */ Context_2;
  outC_calculateBGLocations_CalculateTrainPosition_Pkg /* 6 */ Context_6;
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else */ else_clock_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced */ if_BGpassed_or_onlyAnnounced_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L24 */ _L24_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L23 */ _L23_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L22 */ _L22_if_BGpassed_or_onlyAnnounced;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L21 */ _L21_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L9 */ _L9_if_BGpassed_or_onlyAnnounced;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L12 */ _L12_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L11 */ _L11_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L10 */ _L10_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L14 */ _L14_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L16 */ _L16_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L19 */ _L19_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::else::_L4 */ _L4_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::else::_L6 */ _L6_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L2 */ _L2_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L9 */ _L98_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L13 */ _L13_if_BGpassed_or_onlyAnnounced;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L14 */ _L147_if_BGpassed_or_onlyAnnounced;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L15 */ _L15_if_BGpassed_or_onlyAnnounced;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L16 */ _L166_if_BGpassed_or_onlyAnnounced;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L17 */ _L17_if_BGpassed_or_onlyAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::BG_passed */ BG_passed;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::onlyBGsAnnouncedViaRadio */ onlyBGsAnnouncedViaRadio;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ errors_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */ passedBG_asPositionedBG;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::positionCalculationNotConsistent */ positionCalculationNotConsistent;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPositionInfo */ trainPositionInfo;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_loc */ passedBG_loc;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::linkedBGMissed */ linkedBGMissed;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::twoConsecutiveLinkedBGsMissed */ twoConsecutiveLinkedBGsMissed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::missedLinkedBG */ missedLinkedBG;
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L200 */ _L200;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L201 */ _L201;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L207 */ _L207;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L216 */ _L216;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L238 */ _L238;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L248 */ _L248;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L247 */ _L247;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L246 */ _L246;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L245 */ _L245;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L244 */ _L244;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L243 */ _L243;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L256 */ _L256;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L257 */ _L257;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L258 */ _L258;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L259 */ _L259;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L260 */ _L260;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L308 */ _L308;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L307 */ _L307;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L306 */ _L306;
  ReceivedMessage_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L309 */ _L309;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L329 */ _L329;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L327 */ _L327;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L322 */ _L322;
  kcg_int /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L323 */ _L323;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L324 */ _L324;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L321 */ _L321;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L316 */ _L316;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L331 */ _L331;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L332 */ _L332;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L333 */ _L333;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L334 */ _L334;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L335 */ _L335;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L336 */ _L336;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L383 */ _L383;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L382 */ _L382;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L381 */ _L381;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L380 */ _L380;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L379 */ _L379;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L378 */ _L378;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L377 */ _L377;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L376 */ _L376;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L375 */ _L375;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L374 */ _L374;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L373 */ _L373;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L372 */ _L372;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L371 */ _L371;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L370 */ _L370;
} outC_calculateTrainPosition_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
extern void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

extern void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateTrainPosition_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


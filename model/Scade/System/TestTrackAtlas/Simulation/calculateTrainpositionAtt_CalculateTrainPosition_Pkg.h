/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _calculateTrainpositionAtt_CalculateTrainPosition_Pkg_H_
#define _calculateTrainpositionAtt_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* nidC_nidBG_2_NIDLRBG */ Context_nidC_nidBG_2_NIDLRBG;
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg /* 1 */ _2_Context_1;
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg /* 1 */ _1_Context_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L205 */ _L205;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L218 */ _L218;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L219 */ _L219;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L223 */ _L223;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L225 */ _L225;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L237 */ _L237;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L242 */ _L242;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */ _L243;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L249 */ _L249;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L248 */ _L248;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L247 */ _L247;
  NID_LRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L260 */ _L260;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L261 */ _L261;
  NID_C /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L262 */ _L262;
  NID_BG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L263 */ _L263;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L266 */ _L266;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L267 */ _L267;
  NID_LRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L268 */ _L268;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L269 */ _L269;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L274 */ _L274;
  T_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L301 */ _L301;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L305 */ _L305;
  Q_DLRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L306 */ _L306;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L307 */ _L307;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L310 */ _L310;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L311 */ _L311;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L312 */ _L312;
  kcg_int /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L315 */ _L315;
  kcg_int /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L316 */ _L316;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L320 */ _L320;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L343 */ _L343;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L344 */ _L344;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L346 */ _L346;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L347 */ _L347;
} outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
extern void calculateTrainpositionAtt_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC);

extern void calculateTrainpositionAtt_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateTrainpositionAtt_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainpositionAtt_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


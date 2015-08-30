/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _calculateBGLocations_CalculateTrainPosition_Pkg_H_
#define _calculateBGLocations_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::errors */ errors;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::passedPositionedBG */ passedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _3_Context_1;
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _2_Context_1;
  outC_passing_a_BG_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg /* 2 */ Context_2;
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::outOfMemSpace */ outOfMemSpace;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG_foundNotWhereExpected */ passedBG_foundNotWhereExpected;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::passedPositionedBG_loc */ passedPositionedBG_loc;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::BGpassedInUnexpectedDirection */ BGpassedInUnexpectedDirection;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateBGLocations::_L92 */ _L92;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L87 */ _L87;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L88 */ _L88;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L89 */ _L89;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L90 */ _L90;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L137 */ _L137;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L156 */ _L156;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L157 */ _L157;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L225 */ _L225;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::calculateBGLocations::_L301 */ _L301;
  kcg_int /* CalculateTrainPosition_Pkg::calculateBGLocations::_L298 */ _L298;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L324 */ _L324;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L346 */ _L346;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L347 */ _L347;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L349 */ _L349;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L351 */ _L351;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L352 */ _L352;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L353 */ _L353;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L299 */ _L299;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L354 */ _L354;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L355 */ _L355;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L356 */ _L356;
  Q_LINK /* CalculateTrainPosition_Pkg::calculateBGLocations::_L359 */ _L359;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L358 */ _L358;
  Q_LINK /* CalculateTrainPosition_Pkg::calculateBGLocations::_L357 */ _L357;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L360 */ _L360;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L361 */ _L361;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L362 */ _L362;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L366 */ _L366;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L365 */ _L365;
  kcg_int /* CalculateTrainPosition_Pkg::calculateBGLocations::_L364 */ _L364;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L367 */ _L367;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L369 */ _L369;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L372 */ _L372;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::_L373 */ _L373;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L374 */ _L374;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L376 */ _L376;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateBGLocations::_L377 */ _L377;
} outC_calculateBGLocations_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateBGLocations */
extern void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

extern void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateBGLocations_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateBGLocations_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


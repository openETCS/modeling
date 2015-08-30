/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _passing_a_BG_CalculateTrainPosition_Pkg_H_
#define _passing_a_BG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ passedPositionedBG;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ BGs_out;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ overrun;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */ foundNotWhereAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */ BGpassedInUnexpectedDirection;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _3_Context_1;
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _2_Context_1;
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passing_a_BG::_L1 */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L6 */ _L6;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::passing_a_BG::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L11 */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L12 */ _L12;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L13 */ _L13;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L15 */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */ _L16;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */ _L17;
  array__16894 /* CalculateTrainPosition_Pkg::passing_a_BG::_L18 */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L19 */ _L19;
  array__16944 /* CalculateTrainPosition_Pkg::passing_a_BG::_L20 */ _L20;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */ _L22;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L23 */ _L23;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L24 */ _L24;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L25 */ _L25;
  kcg_int /* CalculateTrainPosition_Pkg::passing_a_BG::_L26 */ _L26;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L30 */ _L30;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passing_a_BG::_L31 */ _L31;
  kcg_bool /* CalculateTrainPosition_Pkg::passing_a_BG::_L32 */ _L32;
} outC_passing_a_BG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::passing_a_BG */
extern void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC);

extern void passing_a_BG_reset_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC);

#endif /* _passing_a_BG_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** passing_a_BG_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


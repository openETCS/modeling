/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_
#define _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::previouslyPassedBG */ previouslyPassedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L42 */ _L42;
  NID_C /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L45 */ _L45;
  NID_BG /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L46 */ _L46;
  NID_C /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L49 */ _L49;
  NID_BG /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L50 */ _L50;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L55 */ _L55;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L62 */ _L62;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L61 */ _L61;
  kcg_int /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L60 */ _L60;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L63 */ _L63;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L64 */ _L64;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L68 */ _L68;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L67 */ _L67;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L69 */ _L69;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L70 */ _L70;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L71 */ _L71;
  kcg_bool /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L72 */ _L72;
} outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
extern void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::last_BGs */positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC);

extern void prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC);

#endif /* _prevPassedLinkedBG_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


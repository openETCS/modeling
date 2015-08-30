/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::indexOfBG */ indexOfBG;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::BG_found */ BG_found;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::indexValid */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L1 */ _L1;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L3 */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L4 */ _L4;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L8 */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L13 */ _L13;
  array_bool_8 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L14 */ _L14;
} outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG */
extern void indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::enable */kcg_bool enable,
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOfLastPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


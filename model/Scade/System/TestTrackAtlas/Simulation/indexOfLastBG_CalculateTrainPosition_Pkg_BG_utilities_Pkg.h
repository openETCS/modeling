/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::indexOfBG */ indexOfBG;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::BG_found */ BG_found;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::indexValid */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L1 */ _L1;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L3 */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L4 */ _L4;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L8 */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L13 */ _L13;
  array_bool_8 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::_L14 */ _L14;
} outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG */
extern void indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::enable */kcg_bool enable,
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOfLastBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


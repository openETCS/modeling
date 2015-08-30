/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */ isInRange;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */ indexOfBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */ BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L2 */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L4 */ _L4;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L5 */ _L5;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L8 */ _L8;
  array__17567 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L9 */ _L9;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L12 */ _L12;
} outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
extern void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */kcg_bool enable,
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


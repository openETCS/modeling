/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _delDispensableBGs_CalculateTrainPosition_Pkg_H_
#define _delDispensableBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 9 */ _2_Context_9;
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 9 */ Context_9;
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ _1_Context_2;
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L14 */ _L14_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L13 */ _L13_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L11 */ _L11_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L10 */ _L10_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L62 */ _L62_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L61 */ _L61_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L47 */ _L47_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L49 */ _L49_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L51 */ _L51_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L52 */ _L52_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L53 */ _L53_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */ _L55_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */ _L54_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L56 */ _L56_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L57 */ _L57_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L58 */ _L58_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L59 */ _L59_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L60 */ _L60_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::passedLinkedBGsCount */ passedLinkedBGsCount;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::passedUnlinkedBGsCount */ passedUnlinkedBGsCount;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::delDispensableBGs::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::delDispensableBGs::_L11 */ _L11;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::_L15 */ _L15;
  kcg_int /* CalculateTrainPosition_Pkg::delDispensableBGs::_L16 */ _L16;
} outC_delDispensableBGs_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::delDispensableBGs */
extern void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::deleteCmd */kcg_bool deleteCmd,
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC);

extern void delDispensableBGs_reset_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC);

#endif /* _delDispensableBGs_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** delDispensableBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


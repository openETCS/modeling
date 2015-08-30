/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */ empty;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */ full;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */ counters;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L1 */ _L1;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L3 */ _L3;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L4 */ _L4;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L14 */ _L14;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L15 */ _L15;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L16 */ _L16;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L17 */ _L17;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L24 */ _L24;
} outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
extern void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */kcg_bool enable,
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_
#define _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::counter */ counter;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L11 */ _L11;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L4 */ _L4;
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L5 */ _L5;
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L9 */ _L9;
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L10 */ _L10;
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L12 */ _L12;
} outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
extern void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

extern void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

#endif /* _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


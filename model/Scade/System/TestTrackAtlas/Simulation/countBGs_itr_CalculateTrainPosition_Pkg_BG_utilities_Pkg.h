/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::cont */ cont;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_out */ counters_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L1 */ _L1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L2 */ _L2;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L8 */ _L8;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L6 */ _L6;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L9 */ _L9;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L10 */ _L10;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L11 */ _L11;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L13 */ _L13;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L14 */ _L14;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L15 */ _L15;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L17 */ _L17;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L18 */ _L18;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L19 */ _L19;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L22 */ _L22;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L21 */ _L21;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L20 */ _L20;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L25 */ _L25;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L24 */ _L24;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L23 */ _L23;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L29 */ _L29;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L30 */ _L30;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L31 */ _L31;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L33 */ _L33;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L32 */ _L32;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L35 */ _L35;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L34 */ _L34;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L37 */ _L37;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L36 */ _L36;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L40 */ _L40;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L41 */ _L41;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L42 */ _L42;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L44 */ _L44;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L43 */ _L43;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L45 */ _L45;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L46 */ _L46;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L47 */ _L47;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L48 */ _L48;
} outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr */
extern void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_in */BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


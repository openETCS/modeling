/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::cont */ cont;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::indexOfBG */ indexOfBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L4 */ _L4;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L19 */ _L19;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L20 */ _L20;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L22 */ _L22;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L23 */ _L23;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L25 */ _L25;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L26 */ _L26;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L27 */ _L27;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L28 */ _L28;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L29 */ _L29;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L30 */ _L30;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L31 */ _L31;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L32 */ _L32;
} outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr */
extern void indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOfLastPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

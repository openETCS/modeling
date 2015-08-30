/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::indexOfBG */ indexOfBG;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BG_found */ BG_found;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L1 */ _L1;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L3 */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L4 */ _L4;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L13 */ _L13;
  array_bool_8 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L14 */ _L14;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L15 */ _L15;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L16 */ _L16;
  array_int_8 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L17 */ _L17;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L18 */ _L18;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L19 */ _L19;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L20 */ _L20;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L21 */ _L21;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L22 */ _L22;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L23 */ _L23;
} outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
extern void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::n */kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::enable */kcg_bool enable,
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


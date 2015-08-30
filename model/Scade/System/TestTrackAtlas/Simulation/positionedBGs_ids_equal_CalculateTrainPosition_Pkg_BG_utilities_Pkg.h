/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::idsEqual */ idsEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L1 */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L3 */ _L3;
  NID_C /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L4 */ _L4;
  NID_BG /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L5 */ _L5;
  NID_C /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L6 */ _L6;
  NID_BG /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L10 */ _L10;
} outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
extern void positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */positionedBG_T_TrainPosition_Types_Pck *bg_1,
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


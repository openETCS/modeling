/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexOfBG */ indexOfBG;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG_found */ BG_found;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexValid */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L2 */ _L2;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L1 */ _L1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L4 */ _L4;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L5 */ _L5;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L6 */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L19 */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L20 */ _L20;
  NID_C /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L21 */ _L21;
  NID_BG /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L22 */ _L22;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L23 */ _L23;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L25 */ _L25;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L86 */ _L86;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L87 */ _L87;
  BG_Header_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L88 */ _L88;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L89 */ _L89;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L90 */ _L90;
} outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
extern void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */kcg_bool enable,
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */


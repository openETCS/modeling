/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::missed */ missed;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::indexOfBG */ indexOfBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BG */ BG;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_out */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L3 */ _L3;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L2 */ _L2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ rem_position;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
extern void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

extern void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#endif /* _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG */ prvBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */ prvBG_loc;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
extern void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


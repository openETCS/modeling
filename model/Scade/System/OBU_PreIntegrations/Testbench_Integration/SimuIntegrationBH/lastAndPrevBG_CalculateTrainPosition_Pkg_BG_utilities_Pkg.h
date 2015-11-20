/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG */ prvBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* linear::Memory::_L8 */ _L8_1;
  positionedBG_T_TrainPosition_Types_Pck /* linear::Memory::_L8 */ _L8_2;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */ prvBG_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::storedBG_loc */ storedBG_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ rem_BG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
extern void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */ kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


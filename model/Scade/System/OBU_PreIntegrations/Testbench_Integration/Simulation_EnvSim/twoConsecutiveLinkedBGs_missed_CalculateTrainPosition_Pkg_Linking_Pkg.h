/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::secondConsecutiveBG_missed */ secondConsecutiveBG_missed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::storedMissedBG */ storedMissedBG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
extern void twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

extern void twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#endif /* _twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


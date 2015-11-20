/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _calculateBGLocations_CalculateTrainPosition_Pkg_H_
#define _calculateBGLocations_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::errors */ errors;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::passedPositionedBG */ passedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateBGLocations_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateBGLocations */
extern void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */ positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateBGLocations_init_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateBGLocations_CalculateTrainPosition_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateBGLocations_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


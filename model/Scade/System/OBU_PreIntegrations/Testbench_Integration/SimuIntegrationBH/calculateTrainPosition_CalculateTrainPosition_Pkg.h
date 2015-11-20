/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _calculateTrainPosition_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPosition_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPosition */ trainPosition;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ BGs_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* 1 */ _1_Context_1;
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* 2 */ Context_2;
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg /* 1 */ Context_1;
  outC_calculateBGLocations_CalculateTrainPosition_Pkg /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateTrainPosition_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
extern void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */ kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateTrainPosition_CalculateTrainPosition_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


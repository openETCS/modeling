/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
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

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPosition */ trainPosition;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calculateBGLocations_CalculateTrainPosition_Pkg /* 6 */ Context_6;
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* 2 */ Context_2;
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateTrainPosition_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
extern void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

extern void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateTrainPosition_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */


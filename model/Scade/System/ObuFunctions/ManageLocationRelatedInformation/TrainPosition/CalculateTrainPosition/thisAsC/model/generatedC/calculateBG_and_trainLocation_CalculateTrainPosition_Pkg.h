/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */
#ifndef _calculateBG_and_trainLocation_CalculateTrainPosition_Pkg_H_
#define _calculateBG_and_trainLocation_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"
#include "memPassedBG_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::trainPositionInfo */ trainPositionInfo;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::BGs */ BGs;
  positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::passedLinkedBG */ passedLinkedBG;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::BGs_loc */ BGs_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_memPassedBG_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/** Calculation of the location of passed and announced BGs and the actual train position */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation */
extern void calculateBG_and_trainLocation_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::reset */ kcg_bool reset,
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC);

extern void calculateBG_and_trainLocation_reset_CalculateTrainPosition_Pkg(
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC);
extern void calculateBG_and_trainLocation_init_CalculateTrainPosition_Pkg(
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateBG_and_trainLocation_CalculateTrainPosition_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateBG_and_trainLocation_CalculateTrainPosition_Pkg.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */


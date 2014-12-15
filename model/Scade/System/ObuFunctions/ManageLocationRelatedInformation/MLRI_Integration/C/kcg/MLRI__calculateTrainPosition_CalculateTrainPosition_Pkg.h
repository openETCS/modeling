/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg_H_
#define _MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "MLRI__delDispensableBGs_CalculateTrainPosition_Pkg.h"
#include "MLRI__calculateBGLocations_CalculateTrainPosition_Pkg.h"
#include "MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"
#include "MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPosition */ trainPosition;
  MLRI__positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs */ BGs;
  MLRI__positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L199 */ _L199;
  MLRI__positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L198 */ _L198;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg /* 1 */ _2_Context_1;
  MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/** The main function calculating the locations of balise groups and the actual train position. */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
extern void MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

extern void MLRI__calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC);

#endif /* _MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */


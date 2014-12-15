/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__calculateBGLocations_CalculateTrainPosition_Pkg_H_
#define _MLRI__calculateBGLocations_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "MLRI__improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "MLRI__passing_a_BG_CalculateTrainPosition_Pkg.h"
#include "MLRI__prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"
#include "MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::BGs */ BGs;
  MLRI__positionErrors_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateBGLocations::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/** Calculation of the locations of passed and announced BGs */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateBGLocations */
extern void MLRI__calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

extern void MLRI__calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC);

#endif /* _MLRI__calculateBGLocations_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateBGLocations_CalculateTrainPosition_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */


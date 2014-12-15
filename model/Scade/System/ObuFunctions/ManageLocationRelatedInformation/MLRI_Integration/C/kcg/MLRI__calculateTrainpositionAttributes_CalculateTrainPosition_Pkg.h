/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_
#define _MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "MLRI__add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "MLRI__nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "MLRI__frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__trainPosition_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/** Figures out the attributes of the current train position with reference to a given LRBG. */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
extern void MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC);

extern void MLRI__calculateTrainpositionAttributes_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC);

#endif /* _MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */


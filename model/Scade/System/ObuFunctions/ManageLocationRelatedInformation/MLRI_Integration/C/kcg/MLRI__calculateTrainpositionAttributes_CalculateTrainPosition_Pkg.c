/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"

void MLRI__calculateTrainpositionAttributes_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  MLRI__runningDirectionVsRef_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_1);
}

/** Figures out the attributes of the current train position with reference to a given LRBG. */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateTrainpositionAttributes_CalculateTrainPosition_Pkg *outC)
{
  MLRI__Q_DIRTRAIN tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L266 */ kcg_bool _L266;
  
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPosition.LRBG,
    &(*trainPositionInfo).lastPassedLinkedBG);
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPosition.prvLRBG,
    &outC->trainPosition.LRBG);
  outC->trainPosition.valid = (*trainPositionInfo).valid;
  outC->trainPosition.timestamp = (*trainPositionInfo).timestamp;
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPosition.trainPosition,
    &(*trainPositionInfo).trainPosition);
  outC->trainPosition.linkingIsUsedOnboard = kcg_false;
  _L266 = !(*trainPositionInfo).lastPassedLinkedBG.valid;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = _L266 |
    (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned;
  /* 1 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L243);
  outC->trainPosition.estimatedFrontEndPosition = _L243.nominal;
  outC->trainPosition.minSafeFrontEndPosition = _L243.nominal + _L243.d_min;
  outC->trainPosition.maxSafeFrontEndPostion = _L243.nominal + _L243.d_max;
  outC->trainPosition.trainPositionIsUnknown = _L266 |
    (MLRI__cNID_LRBG_unknown_BG_Types_Pkg == /* nidC_nidBG_2_NIDLRBG */
      MLRI__nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        (*trainPositionInfo).lastPassedLinkedBG.valid,
        (*trainPositionInfo).lastPassedLinkedBG.nid_c,
        (*trainPositionInfo).lastPassedLinkedBG.nid_bg));
  outC->trainPosition.nominalOrReverseToLRBG = /* 1 */
    MLRI__frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
      &(*trainPositionInfo).lastPassedLinkedBG,
      trainPositionInfo,
      trainProperties);
  if (_L266) {
    outC->trainPosition.trainOrientationToLRBG = MLRI__Q_DIRLRBG_Unknown;
    tmp = MLRI__Q_DIRTRAIN_Unknown;
  }
  else {
    outC->trainPosition.trainOrientationToLRBG =
      (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.trainOrientationToBG;
    tmp =
      (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.trainRunningDirectionToBG;
  }
  /* 1 */
  MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg(
    tmp,
    (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.bgPosition.speed,
    currentOdometry,
    &outC->Context_1);
  outC->trainPosition.trainRunningDirectionToLRBG =
    outC->Context_1.trainRunningDirection;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */


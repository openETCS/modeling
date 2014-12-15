/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__calculateBGLocations_CalculateTrainPosition_Pkg.h"

void MLRI__calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* 2 */
  MLRI__genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
}

/** Calculation of the locations of passed and announced BGs */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateBGLocations */
void MLRI__calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG_notFoundWhereExpected */ kcg_bool passedBG_notFoundWhereExpected;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L87 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L87;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L88 */ MLRI__positionedBGs_T_TrainPosition_Types_Pck _L88;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L351 */ kcg_bool _L351;
  
  outC->errors.positionCalculation_inconsistent = kcg_false;
  outC->errors.DoubleLinkingError = kcg_false;
  outC->errors.DoubleRepositioningError = kcg_false;
  /* 1 */
  MLRI__prevPassedLinkedBG_CalculateTrainPosition_Pkg(passedBG, lastBGs, &tmp);
  /* 2 */
  MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    passedBG,
    lastBGs,
    reset,
    &outC->Context_2);
  /* 1 */
  MLRI__passing_a_BG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp,
    lastBGs,
    outC->Context_2.seqNo,
    trainProperties,
    &_L87,
    &_L88,
    &_L351,
    &passedBG_notFoundWhereExpected);
  outC->errors.passedBG_notFoundWhereExpected = passedBG_notFoundWhereExpected;
  outC->errors.BG_LinkingConsistencyError =
    outC->errors.passedBG_notFoundWhereExpected;
  outC->errors.outOfMemSpace = _L351;
  _L351 = _L87.valid & (_L87.q_link == MLRI__Q_LINK_Linked) &
    !passedBG_notFoundWhereExpected;
  if (reset) {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs,
      (MLRI__positionedBGs_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else if (_L351) {
    /* 1 */
    MLRI__improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L87,
      &_L88,
      trainProperties,
      &outC->BGs);
  }
  else {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L88);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */


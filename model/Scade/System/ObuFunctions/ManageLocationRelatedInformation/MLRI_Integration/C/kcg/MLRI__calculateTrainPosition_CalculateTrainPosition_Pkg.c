/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg.h"

void MLRI__calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  MLRI__calculateTrainpositionAttributes_reset_CalculateTrainPosition_Pkg(
    &outC->Context_1);
  /* 1 */
  MLRI__calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  MLRI__calculateBGLocations_reset_CalculateTrainPosition_Pkg(
    &outC->_2_Context_1);
}

/** The main function calculating the locations of balise groups and the actual train position. */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  MLRI__positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L210 */ MLRI__positionedBGs_T_TrainPosition_Types_Pck _L210;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L229 */ kcg_bool _L229;
  
  _L229 = (*passedBG).valid | reset;
  if (outC->init) {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L210,
      (MLRI__positionedBGs_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L210, &outC->BGs);
  }
  if (_L229) {
    if (reset) {
      MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &tmp,
        (MLRI__positionedBGs_T_TrainPosition_Types_Pck *)
          &MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg);
    }
    else {
      MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp, &_L210);
    }
    /* 1 */
    MLRI__calculateBGLocations_CalculateTrainPosition_Pkg(
      passedBG,
      &tmp,
      reset,
      trainProperties,
      &outC->_2_Context_1);
    MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->_L199,
      &outC->_2_Context_1.errors);
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L198,
      &outC->_2_Context_1.BGs);
    /* 1 */
    MLRI__delDispensableBGs_CalculateTrainPosition_Pkg(
      &outC->_L198,
      _L229,
      &outC->BGs);
  }
  else {
    if (outC->init) {
      MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L199,
        (MLRI__positionErrors_T_TrainPosition_Types_Pck *)
          &MLRI__cNoPositionErrors_CalculateTrainPosition_Pkg);
      MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L198,
        (MLRI__positionedBGs_T_TrainPosition_Types_Pck *)
          &MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg);
    }
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L210);
  }
  /* 1 */
  MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    currentOdometry,
    &outC->BGs,
    _L229,
    &outC->_1_Context_1);
  MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->errors,
    &outC->_L199);
  outC->errors.positionCalculation_inconsistent =
    outC->_1_Context_1.positionCalculationNotConsistent;
  /* 1 */
  MLRI__calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &outC->_1_Context_1.trainPositionInfo,
    currentOdometry,
    trainProperties,
    &outC->Context_1);
  MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->Context_1.trainPosition);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */


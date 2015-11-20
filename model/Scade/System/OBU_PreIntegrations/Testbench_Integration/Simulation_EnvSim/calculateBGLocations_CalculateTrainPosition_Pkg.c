/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"

void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* 2 */ genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
}

/* CalculateTrainPosition_Pkg::calculateBGLocations */
void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG_foundNotWhereExpected */
  static kcg_bool passedBG_foundNotWhereExpected;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L87 */
  static positionedBG_T_TrainPosition_Types_Pck _L87;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L88 */
  static positionedBGs_T_TrainPosition_Types_Pck _L88;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L366 */
  static kcg_bool _L366;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L365 */
  static kcg_bool _L365;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L364 */
  static kcg_int _L364;
  
  outC->errors.positionCalculation_inconsistent = kcg_false;
  outC->errors.linkedBGMissed = kcg_false;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_false;
  outC->errors.doubleRepositioningError = kcg_false;
  /* 1 */
  prevPassedLinkedBG_CalculateTrainPosition_Pkg(passedBG, lastBGs, &tmp);
  /* 2 */
  genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    passedBG,
    lastBGs,
    reset,
    &outC->Context_2);
  /* 1 */
  passing_a_BG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp,
    lastBGs,
    outC->Context_2.seqNo,
    trainProperties,
    &_L87,
    &_L88,
    &outC->errors.outOfMemSpace,
    &passedBG_foundNotWhereExpected,
    &_L365);
  outC->errors.passedBG_foundNotWhereExpected = passedBG_foundNotWhereExpected;
  outC->errors.BGpassedInUnexpectedDirection = _L365;
  outC->errors.BG_LinkingConsistencyError = _L365 |
    passedBG_foundNotWhereExpected;
  _L365 = _L87.valid & (_L87.q_link == Q_LINK_Linked) &
    !passedBG_foundNotWhereExpected;
  if (reset) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else if (_L365) {
    /* 1 */
    improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L87,
      &_L88,
      trainProperties,
      &outC->BGs);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L88);
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L87,
    &outC->BGs,
    _L87.valid,
    &_L364,
    &_L365,
    &_L366);
  if ((0 <= _L364) & (_L364 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedPositionedBG,
      &outC->BGs[_L364]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedPositionedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if (passedBG_foundNotWhereExpected) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &outC->passedPositionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passing_a_BG */
void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */kcg_bool *BGpassedInUnexpectedDirection)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp1;
  static kcg_int i;
  static array__156522 tmp;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */
  static positionedBGs_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L21 */
  static positionedBGs_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */
  static kcg_bool _L22;
  
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedBG,
    BGs_in,
    (*passedBG).valid,
    &i,
    &_L22,
    &_L17);
  if (_L22) {
    if ((0 <= i) & (i < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &(*BGs_in)[i]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp1,
    previouslyPassedLinkedBG,
    passedBGSeqNo,
    trainProperties,
    passedPositionedBG,
    foundNotWhereAnnounced,
    BGpassedInUnexpectedDirection,
    (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *) &tmp[0]);
  /* 2 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedPositionedBG,
    BGs_in,
    &_L16,
    &_L17);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(&tmp[33])[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L16,
    &tmp,
    &_L21,
    &_L22);
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L21, BGs_out);
  *overrun = _L22 | _L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passing_a_BG */
void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection)
{
  static kcg_int i;
  static kcg_bool noname;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L1 */
  static passedBG_T_BG_Types_Pkg _L1;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L7 */
  static linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L10 */
  static kcg_bool _L10;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L12 */
  static positionedBG_T_TrainPosition_Types_Pck _L12;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L13 */
  static positionedBG_T_TrainPosition_Types_Pck _L13;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L15 */
  static kcg_bool _L15;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */
  static positionedBGs_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L19 */
  static positionedBG_T_TrainPosition_Types_Pck _L19;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L20 */
  static array_172785 _L20;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L21 */
  static positionedBGs_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L24 */
  static positionedBGs_T_TrainPosition_Types_Pck _L24;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L25 */
  static positionedBG_T_TrainPosition_Types_Pck _L25;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L26 */
  static kcg_int _L26;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L30 */
  static positionedBGs_T_TrainPosition_Types_Pck _L30;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L31 */
  static trainProperties_T_TrainPosition_Types_Pck _L31;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L32 */
  static kcg_bool _L32;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L1, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L24, BGs_in);
  _L15 = _L1.valid;
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    &_L24,
    _L15,
    &_L9,
    &_L10,
    &_L11);
  if ((0 <= _L9) & (_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L13, &_L24[_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L13,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L19,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* 1 */ if (_L10) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L12, &_L13);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L12, &_L19);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L25,
    previouslyPassedLinkedBG);
  _L26 = passedBGSeqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L31, trainProperties);
  /* 1 */
  passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    &_L1,
    &_L12,
    &_L25,
    _L26,
    &_L31,
    &_L5,
    &_L6,
    &_L32,
    &_L7);
  noname = _L11;
  /* 2 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L5,
    &_L24,
    &_L16,
    &_L17);
  /* pow */ for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L20[i], &_L19);
  }
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(&_L18[0], &_L7);
  kcg_copy_array_172785(&_L18[33], &_L20);
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L16,
    &_L18,
    &_L21,
    &_L22);
  _L23 = _L22 | _L17;
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L21, &_L30);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L30);
  *overrun = _L23;
  *foundNotWhereAnnounced = _L6;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(passedPositionedBG, &_L5);
  *BGpassedInUnexpectedDirection = _L32;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


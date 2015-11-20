/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */ kcg_bool *overrun)
{
  static kcg_int i;
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::lrbg */
  static positionedBG_T_TrainPosition_Types_Pck lrbg;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L1 */
  static passedBG_T_BG_Types_Pkg _L1;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L4 */
  static LinkedBGs_T_BG_Types_Pkg _L4;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L5 */
  static LinkedBG_T_BG_Types_Pkg _L5;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L7 */
  static NID_LRBG _L7;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L10 */
  static NID_BG _L10;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L9 */
  static NID_C _L9;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L12 */
  static kcg_int _L12;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L17 */
  static positionedBG_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L18 */
  static positionedBG_T_TrainPosition_Types_Pck _L18;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L19 */
  static positionedBG_T_TrainPosition_Types_Pck _L19;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L20 */
  static positionedBGs_T_TrainPosition_Types_Pck _L20;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L21 */
  static positionedBG_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L22 */
  static positionedBG_T_TrainPosition_Types_Pck _L22;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L23 */
  static linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L23;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L24 */
  static positionedBG_T_TrainPosition_Types_Pck _L24;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L25 */
  static trainProperties_T_TrainPosition_Types_Pck _L25;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L36 */
  static positionedBGs_T_TrainPosition_Types_Pck _L36;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L35 */
  static positionedBG_T_TrainPosition_Types_Pck _L35;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L33 */
  static positionedBGs_T_TrainPosition_Types_Pck _L33;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L34 */
  static kcg_bool _L34;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L29 */
  static positionedBGs_T_TrainPosition_Types_Pck _L29;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L26 */
  static array_172785 _L26;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L41 */
  static positionedBGs_T_TrainPosition_Types_Pck _L41;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L1, passedBG);
  _L3 = _L1.valid;
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&_L4, &_L1.linkedBGs);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L5, &_L4[0]);
  _L6 = _L5.valid;
  _L7 = _L5.nid_LRBG;
  _L11 = _L3 & _L6;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L11,
    _L7,
    &_L9,
    &_L10);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L17,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L16, &_L17);
  if (kcg_true) {
    _L16.valid = _L11;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L18, &_L16);
  if (kcg_true) {
    _L18.nid_c = _L9;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L19, &_L18);
  if (kcg_true) {
    _L19.nid_bg = _L10;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L20, BGs_in);
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L19,
    &_L20,
    _L11,
    &_L12,
    &_L13,
    &_L14);
  noname = _L14;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L22,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if ((0 <= _L12) & (_L12 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L21, &_L20[_L12]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L21, &_L22);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&lrbg, &_L21);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L24, &lrbg);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L25, trainProperties);
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L24,
    &_L4,
    &_L25,
    &_L23);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L35,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* pow */ for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L26[i], &_L35);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L41, BGs_in);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(&_L29[0], &_L23);
  kcg_copy_array_172785(&_L29[33], &_L26);
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L41,
    &_L29,
    &_L33,
    &_L34);
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L33, &_L36);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L36);
  *overrun = _L34;
  _1_noname = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


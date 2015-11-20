/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::last_BGs */ positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::previouslyPassedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedBG)
{
  static kcg_bool noname;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L42 */
  static kcg_bool _L42;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L45 */
  static NID_C _L45;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L46 */
  static NID_BG _L46;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L49 */
  static NID_C _L49;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L50 */
  static NID_BG _L50;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L55 */
  static kcg_bool _L55;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L62 */
  static kcg_bool _L62;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L61 */
  static kcg_bool _L61;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L60 */
  static kcg_int _L60;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L63 */
  static positionedBGs_T_TrainPosition_Types_Pck _L63;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L64 */
  static positionedBG_T_TrainPosition_Types_Pck _L64;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L68 */
  static passedBG_T_BG_Types_Pkg _L68;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L70 */
  static positionedBG_T_TrainPosition_Types_Pck _L70;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L71 */
  static positionedBG_T_TrainPosition_Types_Pck _L71;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L72 */
  static kcg_bool _L72;
  
  _L72 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L63, last_BGs);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L68, passedBG);
  _L67 = _L68.valid;
  /* 1 */
  indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L72,
    &_L63,
    _L67,
    &_L60,
    &_L61,
    &_L62);
  if ((0 <= _L60) & (_L60 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L64, &_L63[_L60]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L64,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L45 = _L64.nid_c;
  _L46 = _L64.nid_bg;
  _L49 = _L68.BG_Header.nid_c;
  _L50 = _L68.BG_Header.nid_bg;
  _L42 = /* 1 */
    nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L45,
      _L46,
      _L49,
      _L50);
  _L55 = !_L42;
  _L69 = _L61 & _L55;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L71,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* 1 */ if (_L69) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L70, &_L64);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L70, &_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(previouslyPassedBG, &_L70);
  noname = _L62;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


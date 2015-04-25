/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L61 */ kcg_bool _L61;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L60 */ kcg_int _L60;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L64 */ positionedBG_T_TrainPosition_Types_Pck _L64;
  
  /* 1 */
  indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    kcg_true,
    last_BGs,
    (*passedBG).valid,
    &_L60,
    &_L61,
    &tmp);
  if ((0 <= _L60) & (_L60 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L64, &(*last_BGs)[_L60]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L64,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  tmp = /* 1 */
    nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L64.nid_c,
      _L64.nid_bg,
      (*passedBG).BG_Header.nid_c,
      (*passedBG).BG_Header.nid_bg);
  if (_L61 & !tmp) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(previouslyPassedBG, &_L64);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      previouslyPassedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


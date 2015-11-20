/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG */
void indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::indexValid */ kcg_bool *indexValid)
{
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG */
  static kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L1 */
  static kcg_int _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L4 */
  static positionedBGs_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L12 */
  static kcg_int _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L10 */
  static kcg_bool _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG::_L14 */
  static array_bool_41 _L14;
  
  _L5 = cNoValidIndex_CalculateTrainPosition_Pkg;
  _L13 = linked;
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    _L14[i1] = _L13;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L4, BGs);
  _L6 = enable;
  _L1 = _L5;
  if (_L6) {
    for (i = 0; i < 41; i++) {
      acc = _L1;
      /* 1 */
      indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        acc,
        _L14[i],
        &_L4[i],
        &cond_iterw,
        &_L1);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  noname = _L3;
  *indexOfBG = _L1;
  if ((0 <= _L1) & (_L1 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, &_L4[_L1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L7,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L12 = cNoValidIndex_CalculateTrainPosition_Pkg;
  _L8 = _L1 != _L12;
  _L9 = _L7.valid;
  _L10 = _L8 & _L9;
  *BG_found = _L10;
  *indexValid = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */ kcg_bool *isInRange,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */ positionedBG_T_TrainPosition_Types_Pck *BG)
{
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
  static kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L3 */
  static positionedBGs_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L9 */
  static array_170535 _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::_L12 */
  static kcg_bool _L12;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L3, BGs);
  _L8 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L2, position);
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L9[i1], &_L2);
  }
  _L4 = enable;
  _L5 = _L8;
  if (_L4) {
    for (i = 0; i < 41; i++) {
      acc = _L5;
      /* 1 */
      posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        acc,
        &_L9[i],
        &_L3[i],
        &cond_iterw,
        &_L5);
      _L7 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
  if ((0 <= _L5) & (_L5 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &_L3[_L5]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L12 = _L10.valid;
  *isInRange = _L12;
  *indexOfBG = _L5;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG, &_L10);
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


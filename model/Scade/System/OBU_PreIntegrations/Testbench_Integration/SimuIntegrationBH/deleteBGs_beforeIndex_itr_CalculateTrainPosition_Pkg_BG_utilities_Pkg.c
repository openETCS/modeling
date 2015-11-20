/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr */
void deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L7 */
  static positionedBGs_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L6 */
  static kcg_int _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, BGs_in);
  _L4 = iteratorIndex;
  if ((0 <= _L4) & (_L4 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, &_L5[_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
  _L3 = indexOfBG;
  _L9 = _L2.valid;
  *cont = _L9;
  _L6 = iteratorIndex;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L7, BGs_in);
  _L8 = _L3 + _L6;
  if ((0 <= _L8) & (_L8 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &_L7[_L8]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
void deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::del */ kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L9 */
  static array_int_41 _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L17 */
  static positionedBGs_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L20 */
  static positionedBGs_T_TrainPosition_Types_Pck _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L22 */
  static array_169086 _L22;
  
  _L1 = del;
  _L3 = indexOfBG;
  _L5 = 0;
  _L4 = _L3 > _L5;
  _L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  _L6 = _L3 < _L7;
  _L8 = _L1 & _L4 & _L6;
  /* pow */ for (i2 = 0; i2 < 41; i2++) {
    _L9[i2] = _L3;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs_in);
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L22[i1], &_L2);
  }
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        _L9[i],
        &_L22[i],
        &cond_iterw,
        &_L20[i]);
      _L21 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L21 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L21; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L20[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L18, BGs_in);
  /* 1 */ if (_L8) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, &_L20);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, &_L18);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L17);
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


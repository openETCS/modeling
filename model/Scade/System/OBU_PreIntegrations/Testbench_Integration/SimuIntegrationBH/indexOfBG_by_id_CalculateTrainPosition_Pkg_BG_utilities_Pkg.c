/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
void indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexValid */ kcg_bool *indexValid)
{
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
  static kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L6 */
  static kcg_int _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L11 */
  static positionedBGs_T_TrainPosition_Types_Pck _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L12 */
  static positionedBG_T_TrainPosition_Types_Pck _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L16 */
  static kcg_bool _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L17 */
  static kcg_int _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::_L19 */
  static kcg_bool _L19;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs);
  _L3 = enable;
  _L9 = cNoValidIndex_CalculateTrainPosition_Pkg;
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L11[i1], &_L1);
  }
  _L6 = _L9;
  if (_L3) {
    for (i = 0; i < 41; i++) {
      acc = _L6;
      /* 1 */
      indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        acc,
        &_L11[i],
        &_L2[i],
        &cond_iterw,
        &_L6);
      _L8 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L8 = 0;
  }
  *indexOfBG = _L6;
  _L17 = cNoValidIndex_CalculateTrainPosition_Pkg;
  _L18 = _L6 != _L17;
  if ((0 <= _L6) & (_L6 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L12, &_L2[_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L12,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L16 = _L12.valid;
  _L19 = _L18 & _L16;
  *BG_found = _L19;
  *indexValid = _L18;
  noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


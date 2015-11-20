/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */ kcg_bool *empty,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */ kcg_bool *full,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */ BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L1 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L4 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L15 */
  static kcg_int _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L16 */
  static kcg_bool _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L17 */
  static kcg_int _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::_L24 */
  static kcg_int _L24;
  
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L4,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, BGs_in);
  _L12 = enable;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    &_L4);
  if (_L12) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &_L1);
      /* 1 */
      countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &_L5[i],
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
  _L24 = _L1.totalBGsCount;
  _L15 = 0;
  _L14 = _L24 == _L15;
  *empty = _L14;
  _L17 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  _L16 = _L24 == _L17;
  *full = _L16;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters,
    &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


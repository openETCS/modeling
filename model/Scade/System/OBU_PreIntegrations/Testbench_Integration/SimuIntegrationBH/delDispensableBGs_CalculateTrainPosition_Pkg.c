/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::deleteBG */ kcg_bool deleteBG,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *_3_BGs_out)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */
  static positionedBGs_T_TrainPosition_Types_Pck _1_BGs_out;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L14 */
  static positionedBGs_T_TrainPosition_Types_Pck _L14_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L13 */
  static positionedBGs_T_TrainPosition_Types_Pck _L13_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L12 */
  static kcg_bool _L12_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L9 */
  static positionedBGs_T_TrainPosition_Types_Pck _L9_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */
  static positionedBGs_T_TrainPosition_Types_Pck BGs_out;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L62 */
  static kcg_int _L62_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L61 */
  static kcg_int _L61_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L47 */
  static kcg_int _L47_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L49 */
  static kcg_int _L49_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L51 */
  static kcg_int _L51_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L52 */
  static kcg_bool _L52_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L53 */
  static kcg_bool _L53_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */
  static kcg_bool _L55_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */
  static kcg_int _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L56 */
  static positionedBGs_T_TrainPosition_Types_Pck _L56_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L57 */
  static kcg_bool _L57_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L58 */
  static kcg_bool _L58_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L59 */
  static positionedBGs_T_TrainPosition_Types_Pck _L59_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L60 */
  static positionedBGs_T_TrainPosition_Types_Pck _L60_IfBlock1;
  static kcg_bool noname;
  static kcg_bool _2_noname;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::passedLinkedBGsCount */
  static kcg_int passedLinkedBGsCount;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::passedUnlinkedBGsCount */
  static kcg_int passedUnlinkedBGsCount;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L3;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L8 */
  static positionedBGs_T_TrainPosition_Types_Pck _L8;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L15 */
  static kcg_int _L15;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L16 */
  static kcg_int _L16;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L8, BGs_in);
  _L11 = deleteBG;
  /* 1 */
  countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L8,
    _L11,
    &_L1,
    &_L2,
    &_L3);
  noname = _L1;
  _2_noname = _L2;
  _L15 = _L3.passedLinkedBGsCount;
  _L16 = _L3.passedUnlinkedBGsCount;
  passedLinkedBGsCount = _L15;
  passedUnlinkedBGsCount = _L16;
  IfBlock1_clock = passedLinkedBGsCount > 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L14_IfBlock1, BGs_in);
    _L8_IfBlock1 = kcg_true;
    _L1_IfBlock1 = passedLinkedBGsCount;
    _L3_IfBlock1 = cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg;
    _L2_IfBlock1 = _L1_IfBlock1 - _L3_IfBlock1;
    _L5_IfBlock1 = 1;
    _L4_IfBlock1 = _L2_IfBlock1 + _L5_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L9_IfBlock1, BGs_in);
    _L10_IfBlock1 = deleteBG;
    /* 2 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L8_IfBlock1,
      _L4_IfBlock1,
      &_L9_IfBlock1,
      _L10_IfBlock1,
      &_L6_IfBlock1,
      &_L7_IfBlock1);
    _L12_IfBlock1 = deleteBG;
    _L11_IfBlock1 = _L7_IfBlock1 & _L12_IfBlock1;
    /* 2 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L14_IfBlock1,
      _L6_IfBlock1,
      _L11_IfBlock1,
      &_L13_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_1_BGs_out,
      &_L13_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(_3_BGs_out, &_1_BGs_out);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L59_IfBlock1, BGs_in);
    _L53_IfBlock1 = kcg_false;
    _L61_IfBlock1 = passedUnlinkedBGsCount;
    _L62_IfBlock1 = cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg;
    _L47_IfBlock1 = _L61_IfBlock1 - _L62_IfBlock1;
    _L51_IfBlock1 = 1;
    _L49_IfBlock1 = _L47_IfBlock1 + _L51_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L56_IfBlock1, BGs_in);
    _L57_IfBlock1 = deleteBG;
    /* 9 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L53_IfBlock1,
      _L49_IfBlock1,
      &_L56_IfBlock1,
      _L57_IfBlock1,
      &_L54_IfBlock1,
      &_L55_IfBlock1);
    _L52_IfBlock1 = deleteBG;
    _L58_IfBlock1 = _L55_IfBlock1 & _L52_IfBlock1;
    /* 9 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L59_IfBlock1,
      _L54_IfBlock1,
      _L58_IfBlock1,
      &_L60_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&BGs_out, &_L60_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(_3_BGs_out, &BGs_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */


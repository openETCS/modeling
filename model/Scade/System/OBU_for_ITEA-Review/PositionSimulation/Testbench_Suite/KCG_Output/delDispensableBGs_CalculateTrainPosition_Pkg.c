/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::delete */ kcg_bool delete,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */ kcg_int _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */ kcg_bool _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */ kcg_bool _L55_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */ kcg_int _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */ BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L3;
  
  /* 1 */
  countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    delete,
    &IfBlock1_clock,
    &_L7_IfBlock1,
    &_L3);
  IfBlock1_clock = _L3.passedLinkedBGsCount > 0;
  if (IfBlock1_clock) {
    /* 2 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      _L3.passedLinkedBGsCount -
      cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg + 1,
      BGs_in,
      delete,
      &_L6_IfBlock1,
      &_L7_IfBlock1);
    /* 2 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L6_IfBlock1,
      (kcg_bool) (_L7_IfBlock1 & delete),
      BGs_out);
  }
  else {
    /* 9 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_false,
      _L3.passedUnlinkedBGsCount -
      cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg + 1,
      BGs_in,
      delete,
      &_L54_IfBlock1,
      &_L55_IfBlock1);
    /* 9 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L54_IfBlock1,
      (kcg_bool) (_L55_IfBlock1 & delete),
      BGs_out);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


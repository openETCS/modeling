/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::deleteBG */kcg_bool deleteBG,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */
  static kcg_bool _L55_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */
  static kcg_int _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L3;
  
  /* 1 */
  countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    deleteBG,
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
      deleteBG,
      &_L6_IfBlock1,
      &_L7_IfBlock1);
    /* 2 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L6_IfBlock1,
      (kcg_bool) (_L7_IfBlock1 & deleteBG),
      BGs_out);
  }
  else {
    /* 9 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_false,
      _L3.passedUnlinkedBGsCount -
      cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg + 1,
      BGs_in,
      deleteBG,
      &_L54_IfBlock1,
      &_L55_IfBlock1);
    /* 9 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L54_IfBlock1,
      (kcg_bool) (_L55_IfBlock1 & deleteBG),
      BGs_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


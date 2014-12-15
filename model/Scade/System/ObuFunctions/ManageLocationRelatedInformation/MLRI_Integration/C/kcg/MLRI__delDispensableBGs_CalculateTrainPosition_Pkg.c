/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__delDispensableBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void MLRI__delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::delete */kcg_bool delete,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */ kcg_int _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */ kcg_bool _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */ kcg_bool _L55_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */ kcg_int _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */ MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L3;
  
  /* 1 */
  MLRI__countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    delete,
    &IfBlock1_clock,
    &_L7_IfBlock1,
    &_L3);
  IfBlock1_clock = _L3.passedLinkedBGsCount > 0;
  if (IfBlock1_clock) {
    /* 2 */
    MLRI__indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      _L3.passedLinkedBGsCount -
      MLRI__cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg + 1,
      BGs_in,
      delete,
      &_L6_IfBlock1,
      &_L7_IfBlock1);
    /* 2 */
    MLRI__deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L6_IfBlock1,
      (kcg_bool) (_L7_IfBlock1 & delete),
      BGs_out);
  }
  else {
    /* 9 */
    MLRI__indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_false,
      _L3.passedUnlinkedBGsCount -
      MLRI__cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg + 1,
      BGs_in,
      delete,
      &_L54_IfBlock1,
      &_L55_IfBlock1);
    /* 9 */
    MLRI__deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BGs_in,
      _L54_IfBlock1,
      (kcg_bool) (_L55_IfBlock1 & delete),
      BGs_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */


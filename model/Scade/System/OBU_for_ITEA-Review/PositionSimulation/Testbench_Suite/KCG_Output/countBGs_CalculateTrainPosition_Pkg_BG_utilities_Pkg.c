/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable) {
    for (i = 0; i < 8; i++) {
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp1,
        counters);
      /* 1 */
      countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp1,
        &(*BGs_in)[i],
        &tmp,
        counters);
      if (!tmp) {
        break;
      }
    }
  }
  *full = (*counters).totalBGsCount ==
    cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  *empty = (*counters).totalBGsCount == 0;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


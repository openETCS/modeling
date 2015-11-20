/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */kcg_bool *empty,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */kcg_bool *full,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters)
{
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable) {
    for (i = 0; i < 41; i++) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


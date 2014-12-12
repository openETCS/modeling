/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void MLRI__countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */kcg_bool *empty,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */kcg_bool *full,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters)
{
  MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  
  MLRI__kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters,
    (MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &MLRI__cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable) {
    for (i = 0; i < 8; i++) {
      MLRI__kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp1,
        counters);
      /* 1 */
      MLRI__countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
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
    MLRI__cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  *empty = (*counters).totalBGsCount == 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */


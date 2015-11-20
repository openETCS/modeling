/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::n */kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BG_found */kcg_bool *BG_found)
{
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L1 */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L1;
  
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable & (n > 0)) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp1,
        &_L1);
      /* 1 */
      indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        &tmp1,
        linked,
        n,
        &(*BGs)[i],
        &tmp,
        &_L1);
      if (!tmp) {
        break;
      }
    }
  }
  *BG_found = _L1.BGFound;
  *indexOfBG = _L1.index;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


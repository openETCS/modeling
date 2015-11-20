/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
void indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG_found */kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexValid */kcg_bool *indexValid)
{
  static kcg_int tmp2;
  static kcg_int i;
  static kcg_bool tmp1;
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 41; i++) {
      tmp2 = *indexOfBG;
      /* 1 */
      indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp2,
        BG,
        &(*BGs)[i],
        &tmp1,
        indexOfBG);
      if (!tmp1) {
        break;
      }
    }
  }
  *indexValid = *indexOfBG != cNoValidIndex_CalculateTrainPosition_Pkg;
  if ((0 <= *indexOfBG) & (*indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs)[*indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  *BG_found = *indexValid & /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BG,
      &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


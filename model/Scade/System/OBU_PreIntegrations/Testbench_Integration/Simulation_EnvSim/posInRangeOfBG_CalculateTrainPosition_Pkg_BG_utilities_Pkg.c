/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */kcg_bool *isInRange,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 41; i++) {
      tmp1 = *indexOfBG;
      /* 1 */
      posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp1,
        position,
        &(*BGs)[i],
        &tmp,
        indexOfBG);
      if (!tmp) {
        break;
      }
    }
  }
  if ((0 <= *indexOfBG) & (*indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG, &(*BGs)[*indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      BG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  *isInRange = (*BG).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */ kcg_bool *isInRange,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */ positionedBG_T_TrainPosition_Types_Pck *BG)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 8; i++) {
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
  if ((0 <= *indexOfBG) & (*indexOfBG < 8)) {
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


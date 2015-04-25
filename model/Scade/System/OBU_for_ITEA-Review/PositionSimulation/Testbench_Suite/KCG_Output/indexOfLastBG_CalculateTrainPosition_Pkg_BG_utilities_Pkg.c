/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG */
void indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::indexValid */ kcg_bool *indexValid)
{
  kcg_int tmp2;
  kcg_bool tmp1;
  kcg_int i;
  positionedBG_T_TrainPosition_Types_Pck tmp;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 8; i++) {
      tmp2 = *indexOfBG;
      /* 1 */
      indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp2,
        linked,
        &(*BGs)[i],
        &tmp1,
        indexOfBG);
      if (!tmp1) {
        break;
      }
    }
  }
  *indexValid = *indexOfBG != cNoValidIndex_CalculateTrainPosition_Pkg;
  if ((0 <= *indexOfBG) & (*indexOfBG < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs)[*indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  *BG_found = *indexValid & tmp.valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


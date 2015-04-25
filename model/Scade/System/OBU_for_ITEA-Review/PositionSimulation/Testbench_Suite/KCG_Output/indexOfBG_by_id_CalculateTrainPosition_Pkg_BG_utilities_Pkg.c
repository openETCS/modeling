/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
void indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexValid */ kcg_bool *indexValid)
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
      indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
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
** indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


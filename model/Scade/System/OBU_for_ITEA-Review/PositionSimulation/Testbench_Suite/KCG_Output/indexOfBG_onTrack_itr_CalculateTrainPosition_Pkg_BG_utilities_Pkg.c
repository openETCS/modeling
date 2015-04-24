/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr */
void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG_asElementFromBGs */ positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::stopIteration */ kcg_bool stopIteration;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::invalidateIndex */ kcg_bool invalidateIndex;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L38 */ kcg_bool _L38;
  
  _L38 = !(*BG_asElementFromBGs).infoFromPassing.valid;
  invalidateIndex = !(*BG).valid;
  stopIteration = invalidateIndex | !(*BG_asElementFromBGs).valid |
    ((*BG).valid & (*BG_asElementFromBGs).valid & (*BG).infoFromPassing.valid &
      (*BG_asElementFromBGs).infoFromPassing.valid & ((*BG).seqNoOnTrack <=
        (*BG_asElementFromBGs).seqNoOnTrack)) | ((*BG).valid &
      (*BG_asElementFromBGs).valid & (*BG).infoFromPassing.valid & _L38) |
    ((*BG).valid & (*BG_asElementFromBGs).valid & !(*BG).infoFromPassing.valid &
      _L38 & ((*BG).location.nominal <=
        (*BG_asElementFromBGs).location.nominal));
  *cont = !stopIteration;
  if (invalidateIndex) {
    *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else if (stopIteration) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


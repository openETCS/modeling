/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::inRange */ kcg_bool inRange;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L37 */ kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L40 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    position,
    &(*BG).location,
    &_L40,
    &_L37);
  inRange = (*BG).valid & _L37;
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(position, &(*BG).location, &_L40);
  if (inRange) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = prevIndex;
  }
  *cont = (*BG).valid & !(((*BG).valid & (_L40.nominal + _L40.d_max < 0)) |
      inRange);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


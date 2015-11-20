/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::indexOfBG */kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::inRange */
  static kcg_bool inRange;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


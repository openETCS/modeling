/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void posInRangeOfBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 1 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, BG);
  outC->_L19 = outC->_L4.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L33, position);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L34, BG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L35, &outC->_L34.location);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L33,
    &outC->_L35,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L40,
    &outC->Context_1.distance);
  outC->_L41 = outC->_L40.nominal;
  outC->_L42 = outC->_L40.d_max;
  outC->_L43 = outC->_L41 + outC->_L42;
  outC->_L45 = 0;
  outC->_L44 = outC->_L43 < outC->_L45;
  outC->_L50 = outC->_L19 & outC->_L44;
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L33,
    &outC->_L35,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L36,
    &outC->_1_Context_1.loc);
  outC->_L37 = outC->_1_Context_1.overlap;
  outC->_L49 = outC->_L19 & outC->_L37;
  outC->inRange = outC->_L49;
  outC->_L48 = outC->inRange;
  outC->BG_isAhead = outC->_L50;
  outC->_L46 = outC->BG_isAhead;
  outC->_L47 = outC->_L46 | outC->_L48;
  outC->_L39 = !outC->_L47;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L36);
  outC->_L29 = prevIndex;
  outC->_L28 = iteratorIndex;
  if (outC->_L48) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  outC->_L25 = outC->_L19 & outC->_L39;
  outC->indexOfBG = outC->_L27;
  outC->cont = outC->_L25;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


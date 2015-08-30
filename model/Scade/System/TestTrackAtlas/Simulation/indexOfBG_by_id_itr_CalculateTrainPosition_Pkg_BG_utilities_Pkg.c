/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfBG_by_id_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr */
void indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG_asElementFromBGs */positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  outC_indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L18 = iteratorIndex;
  outC->_L16 = prevIndex;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L4,
    BG_asElementFromBGs);
  /* 1 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->_L4,
    &outC->Context_1);
  outC->_L6 = outC->Context_1.idsEqual;
  if (outC->_L6) {
    outC->_L11 = outC->_L18;
  }
  else {
    outC->_L11 = outC->_L16;
  }
  outC->_L8 = !outC->_L6;
  outC->indexOfBG = outC->_L11;
  outC->cont = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


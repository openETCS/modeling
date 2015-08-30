/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfLastPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr */
void indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L32 = Q_LINK_Unlinked;
  outC->_L30 = linked;
  outC->_L21 = Q_LINK_Linked;
  if (outC->_L30) {
    outC->_L31 = outC->_L21;
  }
  else {
    outC->_L31 = outC->_L32;
  }
  outC->_L29 = prevIndex;
  outC->_L28 = iteratorIndex;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, BG);
  outC->_L19 = outC->_L4.valid;
  outC->_L23 = outC->_L4.infoFromPassing.valid;
  outC->_L25 = outC->_L19 & outC->_L23;
  outC->_L20 = outC->_L4.q_link;
  outC->_L22 = outC->_L20 == outC->_L31;
  outC->_L26 = outC->_L25 & outC->_L22;
  if (outC->_L26) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  outC->indexOfBG = outC->_L27;
  outC->cont = outC->_L25;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


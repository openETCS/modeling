/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOf_nthPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr */
void indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_in */BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::n */kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L33,
    acc_in);
  outC->_L53 = outC->_L33.BGFound;
  outC->_L52 = outC->_L33.noOfFoundBGs;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, BG);
  outC->_L19 = outC->_L4.valid;
  outC->_L23 = outC->_L4.infoFromPassing.valid;
  outC->_L25 = outC->_L19 & outC->_L23;
  outC->_L20 = outC->_L4.q_link;
  outC->_L30 = linked;
  outC->_L21 = Q_LINK_Linked;
  outC->_L32 = Q_LINK_Unlinked;
  if (outC->_L30) {
    outC->_L31 = outC->_L21;
  }
  else {
    outC->_L31 = outC->_L32;
  }
  outC->_L22 = outC->_L20 == outC->_L31;
  outC->_L26 = outC->_L25 & outC->_L22;
  outC->_L38 = 1;
  outC->_L37 = outC->_L38 + outC->_L52;
  if (outC->_L26) {
    outC->_L39 = outC->_L37;
  }
  else {
    outC->_L39 = outC->_L52;
  }
  outC->_L42 = n;
  outC->_L43 = outC->_L39 == outC->_L42;
  outC->_L44 = outC->_L43 | outC->_L53;
  outC->_L55 = !outC->_L44;
  outC->_L54 = outC->_L19 & outC->_L55;
  outC->_L51 = outC->_L33.index;
  outC->_L28 = iteratorIndex;
  if (outC->_L26) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L51;
  }
  outC->_L40.index = outC->_L27;
  outC->_L40.noOfFoundBGs = outC->_L39;
  outC->_L40.BGFound = outC->_L44;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->acc_out,
    &outC->_L40);
  outC->cont = outC->_L54;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


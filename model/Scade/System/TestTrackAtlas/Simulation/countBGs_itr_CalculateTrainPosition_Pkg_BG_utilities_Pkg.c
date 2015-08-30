/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr */
void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_in */BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    counters_in);
  outC->_L7 = outC->_L10.passedTotalBGsCount;
  outC->_L31 = outC->_L10.passedLinkedBGsCount;
  outC->_L8 = outC->_L10.passedUnlinkedBGsCount;
  outC->_L30 = outC->_L10.totalBGsCount;
  outC->_L29 = outC->_L10.linkedBGsCount;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG_in);
  outC->_L2 = outC->_L1.valid;
  outC->_L11 = outC->_L1.q_link;
  outC->_L12 = Q_LINK_Linked;
  outC->_L13 = outC->_L11 == outC->_L12;
  outC->_L15 = !outC->_L13;
  outC->_L48 = outC->_L2 & outC->_L15;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L44, BG_in);
  outC->_L43 = outC->_L44.infoFromPassing.valid;
  outC->_L47 = outC->_L2 & outC->_L43;
  outC->_L14 = outC->_L2 & outC->_L13;
  outC->_L46 = outC->_L14 & outC->_L43;
  outC->_L45 = outC->_L48 & outC->_L43;
  outC->_L37 = 1;
  outC->_L36 = outC->_L37 + outC->_L7;
  if (outC->_L47) {
    outC->_L42 = outC->_L36;
  }
  else {
    outC->_L42 = outC->_L7;
  }
  outC->_L35 = 1;
  outC->_L34 = outC->_L35 + outC->_L31;
  if (outC->_L46) {
    outC->_L41 = outC->_L34;
  }
  else {
    outC->_L41 = outC->_L31;
  }
  outC->_L33 = 1;
  outC->_L32 = outC->_L33 + outC->_L8;
  if (outC->_L45) {
    outC->_L40 = outC->_L32;
  }
  else {
    outC->_L40 = outC->_L8;
  }
  outC->_L25 = 1;
  outC->_L23 = outC->_L25 + outC->_L30;
  if (outC->_L2) {
    outC->_L24 = outC->_L23;
  }
  else {
    outC->_L24 = outC->_L30;
  }
  outC->_L20 = 1;
  outC->_L21 = outC->_L20 + outC->_L29;
  if (outC->_L14) {
    outC->_L22 = outC->_L21;
  }
  else {
    outC->_L22 = outC->_L29;
  }
  outC->_L19 = 1;
  outC->_L6 = outC->_L10.unlinkedBGsCount;
  outC->_L18 = outC->_L19 + outC->_L6;
  if (outC->_L48) {
    outC->_L17 = outC->_L18;
  }
  else {
    outC->_L17 = outC->_L6;
  }
  outC->_L9.unlinkedBGsCount = outC->_L17;
  outC->_L9.linkedBGsCount = outC->_L22;
  outC->_L9.totalBGsCount = outC->_L24;
  outC->_L9.passedUnlinkedBGsCount = outC->_L40;
  outC->_L9.passedLinkedBGsCount = outC->_L41;
  outC->_L9.passedTotalBGsCount = outC->_L42;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->counters_out,
    &outC->_L9);
  outC->cont = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


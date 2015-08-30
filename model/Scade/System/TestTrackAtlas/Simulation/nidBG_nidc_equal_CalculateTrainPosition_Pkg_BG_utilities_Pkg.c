/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal */
void nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_2 */NID_C nid_c_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_2 */NID_BG nid_bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_1 */NID_C nid_c_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_1 */NID_BG nid_bg_1,
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L1 = nid_c_2;
  outC->_L2 = nid_c_1;
  outC->_L5 = outC->_L1 == outC->_L2;
  outC->_L3 = nid_bg_2;
  outC->_L4 = nid_bg_1;
  outC->_L6 = outC->_L3 == outC->_L4;
  outC->_L7 = outC->_L5 & outC->_L6;
  outC->isEqual = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


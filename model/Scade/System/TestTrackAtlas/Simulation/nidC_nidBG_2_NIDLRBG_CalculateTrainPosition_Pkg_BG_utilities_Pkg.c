/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG */
void nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::valid */kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidC */NID_C nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidBG */NID_BG nidBG,
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L13 = valid;
  outC->_L10 = cNID_BG_unknown_BG_Types_Pkg;
  outC->_L16 = nidBG;
  outC->_L11 = outC->_L10 != outC->_L16;
  outC->_L12 = outC->_L13 & outC->_L11;
  outC->_L15 = nidC;
  outC->_L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  outC->_L7 = outC->_L15 * outC->_L9;
  outC->_L8 = outC->_L16 + outC->_L7;
  outC->_L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  if (outC->_L12) {
    outC->_L5 = outC->_L8;
  }
  else {
    outC->_L5 = outC->_L6;
  }
  outC->nidLRBG = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


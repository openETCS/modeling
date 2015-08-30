/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG */
void NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::valid */kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidLRBG */NID_LRBG nidLRBG,
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L17 = nidLRBG;
  outC->_L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  outC->_L7 = outC->_L17 / outC->_L9;
  outC->_L21 = outC->_L7 * outC->_L9;
  outC->_L22 = outC->_L17 - outC->_L21;
  outC->_L13 = valid;
  outC->_L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  outC->_L11 = outC->_L6 != outC->_L17;
  outC->_L12 = outC->_L13 & outC->_L11;
  outC->_L10 = cNID_BG_unknown_BG_Types_Pkg;
  if (outC->_L12) {
    outC->_L5 = outC->_L22;
  }
  else {
    outC->_L5 = outC->_L10;
  }
  outC->nidBG = outC->_L5;
  outC->nidC = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


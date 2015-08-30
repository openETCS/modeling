/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->_L12 = 0;
  if (outC->init) {
    outC->_L6 = 0;
  }
  else {
    outC->_L6 = outC->_L11;
  }
  outC->_L4 = reset;
  outC->_L3 = count;
  outC->_L2 = 1;
  outC->_L10 = 0;
  if (outC->_L3) {
    outC->_L9 = outC->_L2;
  }
  else {
    outC->_L9 = outC->_L10;
  }
  outC->_L5 = outC->_L6 + outC->_L9;
  if (outC->_L4) {
    outC->_L11 = outC->_L12;
  }
  else {
    outC->_L11 = outC->_L5;
  }
  outC->counter = outC->_L11;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


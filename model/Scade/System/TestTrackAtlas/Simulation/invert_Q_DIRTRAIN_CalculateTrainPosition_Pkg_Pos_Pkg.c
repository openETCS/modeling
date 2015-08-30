/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

void invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
void invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */Q_DIRTRAIN in,
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->_L5 = Q_DIRTRAIN_Reverse;
  outC->_L4 = Q_DIRTRAIN_Nominal;
  outC->_L3 = Q_DIRTRAIN_Unknown;
  outC->_L1 = in;
  switch (outC->_L1) {
    case Q_DIRTRAIN_Reverse :
      outC->_L2 = outC->_L4;
      break;
    case Q_DIRTRAIN_Nominal :
      outC->_L2 = outC->_L5;
      break;
    case Q_DIRTRAIN_Unknown :
      outC->_L2 = outC->_L3;
      break;
    
  }
  outC->out = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */


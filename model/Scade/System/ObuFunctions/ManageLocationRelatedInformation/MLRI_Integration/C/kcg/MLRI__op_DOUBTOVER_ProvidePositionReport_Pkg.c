/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_DOUBTOVER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTOVER */
MLRI__L_DOUBTOVER MLRI__op_DOUBTOVER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L11 */ kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::l_doubtover */ MLRI__L_DOUBTOVER l_doubtover;
  
  _L11 = (*trainPos).estimatedFrontEndPosition -
    (*trainPos).minSafeFrontEndPosition;
  if (0 <= _L11) {
    l_doubtover = _L11;
  }
  else {
    l_doubtover = - _L11;
  }
  return l_doubtover;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_DOUBTOVER_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */


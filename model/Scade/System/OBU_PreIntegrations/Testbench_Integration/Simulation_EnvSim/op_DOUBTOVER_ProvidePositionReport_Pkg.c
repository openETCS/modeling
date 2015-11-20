/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTOVER */
L_DOUBTOVER op_DOUBTOVER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::l_doubtover */
  static L_DOUBTOVER l_doubtover;
  
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
** op_DOUBTOVER_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


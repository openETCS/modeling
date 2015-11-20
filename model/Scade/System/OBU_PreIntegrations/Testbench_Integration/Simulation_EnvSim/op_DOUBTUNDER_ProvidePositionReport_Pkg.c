/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTUNDER */
L_DOUBTUNDER op_DOUBTUNDER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::l_doubtunder */
  static L_DOUBTUNDER l_doubtunder;
  
  _L11 = (*trainPos).maxSafeFrontEndPostion -
    (*trainPos).estimatedFrontEndPosition;
  if (0 <= _L11) {
    l_doubtunder = _L11;
  }
  else {
    l_doubtunder = - _L11;
  }
  return l_doubtunder;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_DOUBTUNDER_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


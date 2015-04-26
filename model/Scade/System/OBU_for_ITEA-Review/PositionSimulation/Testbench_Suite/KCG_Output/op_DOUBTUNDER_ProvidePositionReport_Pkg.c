/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTUNDER */
L_DOUBTUNDER op_DOUBTUNDER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::_L11 */ kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTUNDER::l_doubtunder */ L_DOUBTUNDER l_doubtunder;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_DOUBTUNDER_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


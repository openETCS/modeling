/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget */
kcg_bool isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Input1 */ Target_real_T_TargetManagement_types *Input1)
{
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Output1 */ kcg_bool Output1;
  
  Output1 = ((*Input1).targetType == LoA_TargetManagement_types) |
    ((*Input1).targetType == MRSP_TargetManagement_types);
  return Output1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


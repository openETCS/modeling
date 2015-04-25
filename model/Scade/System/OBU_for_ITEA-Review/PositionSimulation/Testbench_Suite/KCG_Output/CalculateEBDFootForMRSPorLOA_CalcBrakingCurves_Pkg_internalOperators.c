/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
L_internal_real_Type_SDM_Types_Pkg CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::IsMRSPorLOATarget */ kcg_bool IsMRSPorLOATarget,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  BCAccumulator_type_CalcBrakingCurves_Pkg tmp1;
  kcg_int i;
  ParabolaCurve_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L5 */ BCAccumulator_type_CalcBrakingCurves_Pkg _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L10 */ kcg_bool _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::Output1 */ L_internal_real_Type_SDM_Types_Pkg Output1;
  
  /* InitilizeAccForEBDFootCalc */
  InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
    target,
    aSafe,
    &_L5);
  if (IsMRSPorLOATarget) {
    for (i = 0; i < 24; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&tmp1, &_L5);
      /* 1 */
      BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
        i,
        &tmp1,
        aSafe,
        (*target).speed,
        &_L10,
        &_L5);
      if (!_L10) {
        break;
      }
    }
  }
  /* 1 */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L5.BC, &tmp);
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(
    &tmp,
    (*target).speed,
    &_L10,
    &Output1);
  return Output1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_types *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ kcg_real d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurves_types *BC)
{
  BCAccumulator_type_CalcBrakingCurves_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L19 */ BCAccumulator_type_CalcBrakingCurves_Pkg _L19;
  
  *cond = (*Target).valid;
  if (*cond) {
    /* InitalValues */
    InitalValues_CalcBrakingCurves_Pkg_internalOperators(Target, Asafe, &_L19);
    for (i = 0; i < 24; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&tmp1, &_L19);
      /* 1 */
      BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
        i,
        &tmp1,
        Asafe,
        d_est_front,
        &tmp,
        &_L19);
      if (!tmp) {
        break;
      }
    }
  }
  else {
    /* emptyBCAcc */ emptyBCAcc_CalcBrakingCurves_Pkg(&_L19);
  }
  /* SortByDistances */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L19.BC, BC);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


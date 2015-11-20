/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */Target_real_T_TargetManagement_types *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ParabolaCurve_T_CalcBrakingCurves_types *BC)
{
  static BCAccumulator_type_CalcBrakingCurves_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L19 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L19;
  
  *cond = invalid_TargetManagement_types != (*Target).targetType;
  if (*cond) {
    /* InitalValues */
    InitalValues_CalcBrakingCurves_Pkg_internalOperators(Target, Asafe, &_L19);
    for (i = 0; i < 113; i++) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */


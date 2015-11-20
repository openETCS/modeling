/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc */
void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurveArc::arc */ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::v_est */V_internal_real_Type_SDM_Types_Pkg v_est,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::location */L_internal_real_Type_SDM_Types_Pkg *location,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::valid */kcg_bool *valid)
{
  static kcg_real tmp;
  
  *valid = 0.0 != (*arc).acceleration;
  if (*valid) {
    tmp = (*arc).acceleration * 2.0;
  }
  else {
    tmp = 1.0;
  }
  *location = (*arc).distance - (v_est * v_est - (*arc).speed * (*arc).speed) /
    tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLocationOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_I_MRSP */
void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_I_MRSP::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */L_internal_real_Type_SDM_Types_Pkg *D_I)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::d_I_MRSP::_L18 */
  static kcg_real _L18;
  /* TargetLimits_Pkg::d_I_MRSP::_L28 */
  static L_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::d_I_MRSP::_L27 */
  static kcg_bool _L27;
  
  /* 3 */
  getLocationOnCurve_CalcBrakingCurves_types(GUIcurve, V_MRSP, &_L27, &_L28);
  /* 1 */ d_EBI_non_est_TargetLimits_Pkg(V_MRSP, EBDcurve, T, &tmp, valid);
  _L18 = tmp - V_MRSP * T_driver_SDM_Types_Pkg;
  if (guiCurveEnabled & _L27) {
    if (_L28 <= _L18) {
      tmp = _L28;
    }
    else {
      tmp = _L18;
    }
  }
  else {
    tmp = _L18;
  }
  *D_I = tmp - V_MRSP * (*T).indication;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_I_MRSP_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */


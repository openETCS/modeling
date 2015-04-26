/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_I_MRSP */
void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */ V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::d_I_MRSP::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_I_MRSP::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */ L_internal_real_Type_SDM_Types_Pkg *D_I)
{
  /* TargetLimits_Pkg::d_I_MRSP::_L18 */ kcg_real _L18;
  /* TargetLimits_Pkg::d_I_MRSP::_L28 */ L_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::d_I_MRSP::_L27 */ kcg_bool _L27;
  /* TargetLimits_Pkg::d_I_MRSP::_L32 */ L_internal_real_Type_SDM_Types_Pkg _L32;
  
  /* 3 */
  getLocationOnCurve_CalcBrakingCurves_types(GUIcurve, V_MRSP, &_L27, &_L28);
  /* 1 */
  d_EBI_non_est_TargetLimits_Pkg(
    V_MRSP,
    EBDcurve,
    T_Traction,
    T_berem,
    T_bs2,
    &_L32,
    valid);
  _L18 = _L32 - V_MRSP * T_driver_SDM_Types_Pkg;
  if (guiCurveEnabled & _L27) {
    if (_L28 <= _L18) {
      *D_I = _L28;
    }
    else {
      *D_I = _L18;
    }
  }
  else {
    *D_I = _L18;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_I_MRSP_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */


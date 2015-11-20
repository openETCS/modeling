/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_ReleaseOnboardIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_ReleaseOnboardIterator */
void v_ReleaseOnboardIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release */V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_ura */V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::D_tripEOA */L_internal_real_Type_SDM_Types_Pkg D_tripEOA,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::run_condition */kcg_bool *run_condition,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release_next */V_internal_real_Type_SDM_Types_Pkg *V_release_next)
{
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L20 */
  static kcg_bool _L20;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L24 */
  static kcg_real _L24;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L25 */
  static kcg_real _L25;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L28 */
  static V_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L32 */
  static L_internal_real_Type_SDM_Types_Pkg _L32;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L31 */
  static kcg_bool _L31;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L40 */
  static kcg_real _L40;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L50 */
  static kcg_bool _L50;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_target, &_L31, &_L32);
  _L20 = !(*T).inhComp;
  _L24 = /* 1 */ f_41_TargetLimits_Pkg(V_release);
  if (_L20) {
    if (V_ura >= _L24) {
      _L40 = V_ura;
    }
    else {
      _L40 = _L24;
    }
  }
  else {
    _L40 = 0.0;
  }
  _L24 = D_tripEOA + (V_release + _L40) * ((*T).berem + (*T).Traction);
  /* 1 */ getSpeedOnCurve_CalcBrakingCurves_types(EBDcurve, _L24, &_L20, &_L28);
  _L50 = _L31 & _L20;
  _L25 = _L28 - _L40;
  if ((_L32 <= _L24) | (_L25 <= V_target)) {
    _L28 = V_target;
  }
  else {
    _L28 = _L25;
  }
  if (_L50) {
    *V_release_next = _L28;
  }
  else {
    *V_release_next = - 1.0;
  }
  _L40 = _L28 - V_release;
  if (0. <= _L40) {
    _L24 = _L40;
  }
  else {
    _L24 = - _L40;
  }
  *run_condition = _L50 & !(_L24 <= 1.0 / 3.6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_ReleaseOnboardIterator_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */


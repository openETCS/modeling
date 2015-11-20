/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_release_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_release */
void v_release_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_release::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_release::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_release::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_release::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::v_release::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_release::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::v_release::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::v_release::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_release::V_release */ V_internal_real_Type_SDM_Types_Pkg *V_release,
  /* TargetLimits_Pkg::v_release::valid */ kcg_bool *valid)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TargetLimits_Pkg::v_release */
  static V_internal_real_Type_SDM_Types_Pkg acc;
  /* TargetLimits_Pkg::v_release */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetLimits_Pkg::v_release */
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::v_release */
  static kcg_bool ck_every;
  static kcg_int noname;
  /* TargetLimits_Pkg::v_release::_L9 */
  static V_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::v_release::_L12 */
  static kcg_int _L12;
  /* TargetLimits_Pkg::v_release::_L14 */
  static array_169580 _L14;
  /* TargetLimits_Pkg::v_release::_L15 */
  static array_real_10 _L15;
  /* TargetLimits_Pkg::v_release::_L16 */
  static array_real_10 _L16;
  /* TargetLimits_Pkg::v_release::_L17 */
  static array_real_10 _L17;
  /* TargetLimits_Pkg::v_release::_L19 */
  static array_170601 _L19;
  /* TargetLimits_Pkg::v_release::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::v_release::_L23 */
  static V_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::v_release::_L24 */
  static V_internal_real_Type_SDM_Types_Pkg _L24;
  /* TargetLimits_Pkg::v_release::_L25 */
  static V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::v_release::_L26 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L26;
  /* TargetLimits_Pkg::v_release::_L28 */
  static T_trac_t_TargetLimits_Pkg _L28;
  /* TargetLimits_Pkg::v_release::_L33 */
  static L_internal_real_Type_SDM_Types_Pkg _L33;
  /* TargetLimits_Pkg::v_release::_L46 */
  static kcg_bool _L46;
  /* TargetLimits_Pkg::v_release::_L47 */
  static kcg_real _L47;
  /* TargetLimits_Pkg::v_release::_L55 */
  static V_internal_real_Type_SDM_Types_Pkg _L55;
  /* TargetLimits_Pkg::v_release::_L57 */
  static kcg_bool _L57;
  /* TargetLimits_Pkg::v_release::_L58 */
  static kcg_bool _L58;
  /* TargetLimits_Pkg::v_release::_L59 */
  static MA_section_real_T_TargetManagement_types _L59;
  /* TargetLimits_Pkg::v_release::_L60 */
  static kcg_bool _L60;
  /* TargetLimits_Pkg::v_release::_L61 */
  static V_internal_real_Type_SDM_Types_Pkg _L61;
  /* TargetLimits_Pkg::v_release::_L63 */
  static TrainLocations_real_T_SDM_Types_Pkg _L63;
  /* TargetLimits_Pkg::v_release::_L64 */
  static trainData_internal_t_SDM_Types_Pkg _L64;
  
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L59, MA);
  _L60 = _L59.q_calculate_release;
  ck_every = _L60;
  _L33 = D_EOA;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L63, trainLocations);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L64, trainData_int);
  /* ck_v_release */ if (ck_every) {
    op_call = /* 1 */ d_tripEOA_TargetLimits_Pkg(_L33, &_L63, &_L64);
  }
  _L23 = V_target;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L26, EBDcurve);
  /* pow */ for (i5 = 0; i5 < 10; i5++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L14[i5], &_L26);
  }
  _L25 = V_ura;
  /* pow */ for (i4 = 0; i4 < 10; i4++) {
    _L15[i4] = _L25;
  }
  _L24 = V_target;
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    _L16[i3] = _L24;
  }
  /* ck_v_release */ if (ck_every) {
    _L21 = op_call;
  }
  else {
    _L21 = 0.0;
  }
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    _L17[i2] = _L21;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L28, T);
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L19[i1], &_L28);
  }
  _L9 = _L23;
  if (_L60) {
    for (i = 0; i < 10; i++) {
      acc = _L9;
      /* 1 */
      v_ReleaseOnboardIterator_TargetLimits_Pkg(
        acc,
        &_L14[i],
        _L15[i],
        _L16[i],
        _L17[i],
        &_L19[i],
        &cond_iterw,
        &_L9);
      _L12 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L12 = 0;
  }
  _L61 = _L59.ReleaseSpeed;
  /* 1 */ if (_L60) {
    _L55 = _L9;
  }
  else {
    _L55 = _L61;
  }
  *V_release = _L55;
  noname = _L12;
  _L47 = 0.0;
  _L46 = _L9 <= _L47;
  _L57 = _L60 & _L46;
  _L58 = !_L57;
  *valid = _L58;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_release_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_ReleaseOnboardIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_ReleaseOnboardIterator */
void v_ReleaseOnboardIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release */ V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::D_tripEOA */ L_internal_real_Type_SDM_Types_Pkg D_tripEOA,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::run_condition */ kcg_bool *run_condition,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release_next */ V_internal_real_Type_SDM_Types_Pkg *V_release_next)
{
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_1;
  /* math::Max::I2 */
  static kcg_real I2_1;
  /* math::Max::I1 */
  static kcg_real I1_1;
  /* math::Max::_L4 */
  static kcg_real _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_11;
  /* math::Max::_L2 */
  static kcg_real _L2_12;
  /* math::Max::_L1 */
  static kcg_real _L1_13;
  /* math::Abs::A_Output */
  static kcg_real A_Output_1;
  /* math::Abs::A_Input */
  static kcg_real A_Input_1;
  /* math::Abs::_L8 */
  static kcg_real _L8_1;
  /* math::Abs::_L5 */
  static kcg_real _L5_1;
  /* math::Abs::_L3 */
  static kcg_real _L3_1;
  /* math::Abs::_L2 */
  static kcg_real _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator */
  static kcg_real op_call;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator */
  static kcg_bool ck_every;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::v_delta0rsob */
  static V_internal_real_Type_SDM_Types_Pkg v_delta0rsob;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::d_bec */
  static L_internal_real_Type_SDM_Types_Pkg d_bec;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::end_condition */
  static kcg_bool end_condition;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L10 */
  static kcg_bool _L10;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L9 */
  static V_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L8 */
  static T_trac_t_TargetLimits_Pkg _L8;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L6 */
  static V_internal_real_Type_SDM_Types_Pkg _L6;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L4 */
  static kcg_real _L4;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L3 */
  static kcg_real _L3;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L11 */
  static V_internal_real_Type_SDM_Types_Pkg _L11;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L12 */
  static V_internal_real_Type_SDM_Types_Pkg _L12;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L13 */
  static kcg_real _L13;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L14 */
  static kcg_real _L14;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L15 */
  static V_internal_real_Type_SDM_Types_Pkg _L15;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L18 */
  static V_internal_real_Type_SDM_Types_Pkg _L18;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L21 */
  static V_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L20 */
  static kcg_bool _L20;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L22 */
  static L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L23 */
  static L_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L24 */
  static kcg_real _L24;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L25 */
  static kcg_real _L25;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L26 */
  static V_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L28 */
  static V_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L29 */
  static V_internal_real_Type_SDM_Types_Pkg _L29;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L32 */
  static L_internal_real_Type_SDM_Types_Pkg _L32;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L31 */
  static kcg_bool _L31;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L33 */
  static V_internal_real_Type_SDM_Types_Pkg _L33;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L34 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L34;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L35 */
  static kcg_bool _L35;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L36 */
  static kcg_bool _L36;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L38 */
  static kcg_bool _L38;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L39 */
  static kcg_real _L39;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L40 */
  static kcg_real _L40;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L41 */
  static V_internal_real_Type_SDM_Types_Pkg _L41;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L42 */
  static kcg_bool _L42;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L43 */
  static kcg_bool _L43;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L45 */
  static kcg_real _L45;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L46 */
  static kcg_bool _L46;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L47 */
  static kcg_bool _L47;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L48 */
  static kcg_real _L48;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L49 */
  static kcg_real _L49;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L50 */
  static kcg_bool _L50;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L51 */
  static kcg_bool _L51;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L52 */
  static T_internal_real_Type_SDM_Types_Pkg _L52;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L53 */
  static T_internal_real_Type_SDM_Types_Pkg _L53;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L55 */
  static T_trac_t_TargetLimits_Pkg _L55;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L54 */
  static kcg_bool _L54;
  
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L55, T);
  _L54 = _L55.inhComp;
  _L10 = !_L54;
  ck_every = _L10;
  _L12 = V_ura;
  /* ck_v_ReleaseOnboardIterator */ if (ck_every) {
    I1_1 = _L12;
    _L1_13 = I1_1;
  }
  _L6 = V_release;
  _L9 = /* 1 */ f_41_TargetLimits_Pkg(_L6);
  /* ck_v_ReleaseOnboardIterator */ if (ck_every) {
    I2_1 = _L9;
    _L2_12 = I2_1;
    _L3_11 = _L1_13 >= _L2_12;
    /* 2 */ if (_L3_11) {
      _L4_1 = _L1_13;
    }
    else {
      _L4_1 = _L2_12;
    }
    Ma_Output_1 = _L4_1;
    op_call = Ma_Output_1;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, EBDcurve);
  _L18 = V_release;
  _L13 = 0.0;
  /* ck_v_ReleaseOnboardIterator */ if (ck_every) {
    _L11 = op_call;
  }
  else {
    _L11 = _L13;
  }
  v_delta0rsob = _L11;
  _L15 = v_delta0rsob;
  _L14 = _L18 + _L15;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L8, T);
  _L52 = _L8.berem;
  _L53 = _L8.Traction;
  _L4 = _L52 + _L53;
  _L3 = _L14 * _L4;
  d_bec = _L3;
  _L22 = D_tripEOA;
  _L23 = d_bec;
  _L24 = _L22 + _L23;
  /* 1 */ getSpeedOnCurve_CalcBrakingCurves_types(&_L1, _L24, &_L20, &_L21);
  _L26 = v_delta0rsob;
  _L25 = _L21 - _L26;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L34, EBDcurve);
  _L33 = V_target;
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L34, _L33, &_L31, &_L32);
  _L50 = _L31 & _L20;
  _L51 = !_L50;
  _L49 = - 1.0;
  _L35 = _L32 <= _L24;
  _L29 = V_target;
  _L36 = _L25 <= _L29;
  _L38 = _L35 | _L36;
  /* 1 */ if (_L38) {
    _L28 = _L29;
  }
  else {
    _L28 = _L25;
  }
  /* 2 */ if (_L51) {
    _L48 = _L49;
  }
  else {
    _L48 = _L28;
  }
  *V_release_next = _L48;
  _L8_1 = 0.;
  _L41 = V_release;
  _L40 = _L28 - _L41;
  A_Input_1 = _L40;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L39 = A_Output_1;
  _L45 = 1.0 / 3.6;
  _L42 = _L39 <= _L45;
  end_condition = _L42;
  _L47 = end_condition;
  _L43 = !_L47;
  _L46 = _L31 & _L20 & _L43;
  *run_condition = _L46;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_ReleaseOnboardIterator_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


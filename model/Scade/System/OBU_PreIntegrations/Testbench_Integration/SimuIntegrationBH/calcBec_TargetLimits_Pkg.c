/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcBec_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::calcBec */
void calcBec_TargetLimits_Pkg(
  /* TargetLimits_Pkg::calcBec::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::calcBec::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::calcBec::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::calcBec::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::calcBec::bec */ bec_t_TargetLimits_Pkg *bec)
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
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_real _L2_1;
  /* math::Max::_L1 */
  static kcg_real _L1_1;
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_2;
  /* math::Max::I2 */
  static kcg_real I2_2;
  /* math::Max::I1 */
  static kcg_real I1_2;
  /* math::Max::_L4 */
  static kcg_real _L4_2;
  /* math::Max::_L3 */
  static kcg_bool _L3_2;
  /* math::Max::_L2 */
  static kcg_real _L2_2;
  /* math::Max::_L1 */
  static kcg_real _L1_2;
  /* TargetLimits_Pkg::calcBec::v_bec */
  static V_internal_real_Type_SDM_Types_Pkg v_bec;
  /* TargetLimits_Pkg::calcBec::_L23 */
  static V_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::calcBec::_L24 */
  static kcg_real _L24;
  /* TargetLimits_Pkg::calcBec::_L25 */
  static V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::calcBec::_L28 */
  static kcg_real _L28;
  /* TargetLimits_Pkg::calcBec::_L31 */
  static kcg_real _L31;
  /* TargetLimits_Pkg::calcBec::_L32 */
  static kcg_real _L32;
  /* TargetLimits_Pkg::calcBec::_L33 */
  static kcg_real _L33;
  /* TargetLimits_Pkg::calcBec::_L34 */
  static V_internal_real_Type_SDM_Types_Pkg _L34;
  /* TargetLimits_Pkg::calcBec::_L38 */
  static V_internal_real_Type_SDM_Types_Pkg _L38;
  /* TargetLimits_Pkg::calcBec::_L39 */
  static kcg_real _L39;
  /* TargetLimits_Pkg::calcBec::_L44 */
  static kcg_real _L44;
  /* TargetLimits_Pkg::calcBec::_L45 */
  static kcg_real _L45;
  /* TargetLimits_Pkg::calcBec::_L48 */
  static V_internal_real_Type_SDM_Types_Pkg _L48;
  /* TargetLimits_Pkg::calcBec::_L49 */
  static kcg_real _L49;
  /* TargetLimits_Pkg::calcBec::_L51 */
  static kcg_real _L51;
  /* TargetLimits_Pkg::calcBec::_L83 */
  static T_trac_t_TargetLimits_Pkg _L83;
  /* TargetLimits_Pkg::calcBec::_L91 */
  static V_internal_real_Type_SDM_Types_Pkg _L91;
  /* TargetLimits_Pkg::calcBec::_L92 */
  static V_internal_real_Type_SDM_Types_Pkg _L92;
  /* TargetLimits_Pkg::calcBec::_L94 */
  static TractionDeltaTriple_TargetLimits_Pkg _L94;
  /* TargetLimits_Pkg::calcBec::_L102 */
  static V_internal_real_Type_SDM_Types_Pkg _L102;
  /* TargetLimits_Pkg::calcBec::_L101 */
  static V_internal_real_Type_SDM_Types_Pkg _L101;
  /* TargetLimits_Pkg::calcBec::_L100 */
  static V_internal_real_Type_SDM_Types_Pkg _L100;
  /* TargetLimits_Pkg::calcBec::_L110 */
  static TractionDeltaTriple_TargetLimits_Pkg _L110;
  /* TargetLimits_Pkg::calcBec::_L107 */
  static V_internal_real_Type_SDM_Types_Pkg _L107;
  /* TargetLimits_Pkg::calcBec::_L108 */
  static V_internal_real_Type_SDM_Types_Pkg _L108;
  /* TargetLimits_Pkg::calcBec::_L109 */
  static V_internal_real_Type_SDM_Types_Pkg _L109;
  /* TargetLimits_Pkg::calcBec::_L113 */
  static bec_t_TargetLimits_Pkg _L113;
  /* TargetLimits_Pkg::calcBec::_L114 */
  static T_internal_real_Type_SDM_Types_Pkg _L114;
  /* TargetLimits_Pkg::calcBec::_L115 */
  static T_internal_real_Type_SDM_Types_Pkg _L115;
  
  _L25 = V_target;
  I1_1 = _L25;
  _L1_1 = I1_1;
  _L92 = V_est;
  kcg_copy_TractionDeltaTriple_TargetLimits_Pkg(&_L94, V_dt);
  _L100 = _L94[0];
  _L101 = _L94[1];
  _L24 = _L92 + _L100 + _L101;
  I2_1 = _L24;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L23 = Ma_Output_1;
  _L102 = _L94[2];
  _L28 = _L23 + _L102;
  v_bec = _L28;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L83, T);
  _L114 = _L83.Traction;
  _L38 = V_target;
  I1_2 = _L38;
  _L1_2 = I1_2;
  _L91 = V_est;
  kcg_copy_TractionDeltaTriple_TargetLimits_Pkg(&_L110, V_dt);
  _L107 = _L110[0];
  _L108 = _L110[1];
  _L45 = 0.5;
  _L44 = _L108 * _L45;
  _L39 = _L91 + _L107 + _L44;
  I2_2 = _L39;
  _L2_2 = I2_2;
  _L3_2 = _L1_2 >= _L2_2;
  /* 2 */ if (_L3_2) {
    _L4_2 = _L1_2;
  }
  else {
    _L4_2 = _L2_2;
  }
  Ma_Output_2 = _L4_2;
  _L34 = Ma_Output_2;
  _L32 = _L114 * _L34;
  _L115 = _L83.berem;
  _L48 = v_bec;
  _L109 = _L110[2];
  _L51 = _L109 * _L45;
  _L49 = _L48 - _L51;
  _L33 = _L115 * _L49;
  _L31 = _L32 + _L33;
  _L113.v = _L28;
  _L113.d = _L31;
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L113);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcBec_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


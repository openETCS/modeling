/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */ T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */ V_internal_real_Type_SDM_Types_Pkg *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */ V_internal_real_Type_SDM_Types_Pkg *V_ura)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_11;
  /* math::Min::I1 */
  static kcg_real I1_12;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
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
  /* TargetLimits_Pkg::surplusTractionDeltas::T_be */
  static T_internal_real_Type_SDM_Types_Pkg T_be;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_bs2 */
  static T_internal_real_Type_SDM_Types_Pkg T_bs2;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_berem */
  static T_internal_real_Type_SDM_Types_Pkg T_berem;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */
  static T_internal_real_Type_SDM_Types_Pkg T_Traction;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L9 */
  static kcg_real _L9;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L11 */
  static T_internal_real_Type_SDM_Types_Pkg _L11;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L13 */
  static kcg_real _L13;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L16 */
  static kcg_real _L16;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L21 */
  static kcg_real _L21;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L57 */
  static kcg_real _L57;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L64 */
  static A_internal_real_Type_SDM_Types_Pkg _L64;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L66 */
  static kcg_real _L66;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L77 */
  static kcg_real _L77;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L79 */
  static kcg_real _L79;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L80 */
  static kcg_real _L80;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L85 */
  static array_real_3 _L85;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L87 */
  static T_trac_t_TargetLimits_Pkg _L87;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L88 */
  static kcg_real _L88;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L89 */
  static kcg_real _L89;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L97 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L97;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L96 */
  static kcg_real _L96;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L95 */
  static odometry_T_Obu_BasicTypes_Pkg _L95;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L93 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L93;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L92 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L92;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L99 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L99;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L98 */
  static odometry_T_Obu_BasicTypes_Pkg _L98;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L100 */
  static t_Brake_t_SDMModelPkg _L100;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L104 */
  static T_internal_real_Type_SDM_Types_Pkg _L104;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L103 */
  static T_internal_real_Type_SDM_Types_Pkg _L103;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L106 */
  static T_internal_real_Type_SDM_Types_Pkg _L106;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L105 */
  static T_internal_real_Type_SDM_Types_Pkg _L105;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L107 */
  static T_internal_real_Type_SDM_Types_Pkg _L107;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L108 */
  static T_internal_real_Type_SDM_Types_Pkg _L108;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L109 */
  static V_internal_real_Type_SDM_Types_Pkg _L109;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L111 */
  static kcg_real _L111;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L112 */
  static T_internal_real_Type_SDM_Types_Pkg _L112;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L114 */
  static T_internal_real_Type_SDM_Types_Pkg _L114;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L116 */
  static T_internal_real_Type_SDM_Types_Pkg _L116;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L115 */
  static T_internal_real_Type_SDM_Types_Pkg _L115;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L123 */
  static T_trac_t_TargetLimits_Pkg _L123;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L125 */
  static T_trac_t_TargetLimits_Pkg _L125;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L131 */
  static T_internal_real_Type_SDM_Types_Pkg _L131;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L132 */
  static T_internal_real_Type_SDM_Types_Pkg _L132;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L135 */
  static bec_t_TargetLimits_Pkg _L135;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L136 */
  static V_internal_real_Type_SDM_Types_Pkg _L136;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L137 */
  static trainData_internal_t_SDM_Types_Pkg _L137;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L138 */
  static kcg_bool _L138;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L139 */
  static kcg_bool _L139;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L142 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L142;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L141 */
  static kcg_bool _L141;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L140 */
  static trainData_internal_t_SDM_Types_Pkg _L140;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L143 */
  static kcg_bool _L143;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L144 */
  static kcg_bool _L144;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L145 */
  static A_internal_real_Type_SDM_Types_Pkg _L145;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L147 */
  static V_internal_real_Type_SDM_Types_Pkg _L147;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L148 */
  static V_internal_real_Type_SDM_Types_Pkg _L148;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L149 */
  static V_internal_real_Type_SDM_Types_Pkg _L149;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L157 */
  static kcg_real _L157;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L156 */
  static kcg_real _L156;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L154 */
  static kcg_real _L154;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L152 */
  static kcg_real _L152;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L150 */
  static kcg_real _L150;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L158 */
  static T_internal_real_Type_SDM_Types_Pkg _L158;
  
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L140, trainData_int);
  _L141 = _L140.isTCOAvailable;
  _L142 = _L140.T_traction_cut_off;
  _L158 = /* 1 */ TransformT_intToT_real_SDM_Types_Pkg(_L142);
  _L11 = T_warning_SDM_Types_Pkg;
  _L109 = V_target;
  _L111 = 0.0;
  _L110 = _L109 == _L111;
  kcg_copy_t_Brake_t_SDMModelPkg(&_L100, T_b);
  _L106 = _L100.service[0];
  _L105 = _L100.service[1];
  /* 3 */ if (_L110) {
    _L108 = _L106;
  }
  else {
    _L108 = _L105;
  }
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L137, trainData_int);
  _L138 = _L137.isSB_FBAvailable;
  _L139 = _L137.isSB_CmdAvailable;
  /* 1 */ splitT_bs_TargetLimits_Pkg(_L108, _L138, _L139, &_L115, &_L116);
  T_bs2 = _L116;
  _L114 = T_bs2;
  _L13 = _L11 + _L114;
  _L10 = _L158 - _L13;
  /* 1 */ if (_L141) {
    _L9 = _L10;
  }
  else {
    _L9 = _L158;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L98, odometry);
  _L99 = _L98.acceleration;
  _L145 = /* 1 */ TransformA_intToA_real_SDM_Types_Pkg(_L99);
  I1_12 = _L145;
  _L21_1 = I1_12;
  _L66 = 0.4;
  I2_11 = _L66;
  _L22_1 = I2_11;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L64 = Mi_Output_1;
  _L79 = /* 2 */ limitPositive_SDM_Types_Pkg(_L64);
  _L104 = _L100.emergency[0];
  _L103 = _L100.emergency[1];
  /* 3 */ if (_L110) {
    _L107 = _L104;
  }
  else {
    _L107 = _L103;
  }
  T_be = _L107;
  _L112 = T_be;
  _L80 = /* 1 */ limitPositive_SDM_Types_Pkg(_L9);
  _L57 = _L112 - _L80;
  _L77 = /* 3 */ limitPositive_SDM_Types_Pkg(_L57);
  _L16 = _L79 * _L77;
  _L21 = _L80 * _L145;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L87, T_part);
  _L144 = _L87.inhComp;
  _L89 = 0.0;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L95, odometry);
  _L92 = _L95.speed.v_upper;
  _L149 = /* 1 */ TransformV_odoToV_real_SDM_Types_Pkg(_L92);
  _L97 = _L95.speed.v_rawNominal;
  _L148 = /* 2 */ TransformV_odoToV_real_SDM_Types_Pkg(_L97);
  _L96 = _L149 - _L148;
  /* 2 */ if (_L144) {
    _L88 = _L89;
  }
  else {
    _L88 = _L96;
  }
  _L85[0] = _L88;
  _L85[1] = _L21;
  _L85[2] = _L16;
  *V_ura = _L96;
  _L93 = _L95.speed.v_safeNominal;
  _L147 = /* 3 */ TransformV_odoToV_real_SDM_Types_Pkg(_L93);
  *V_est = _L147;
  T_Traction = _L80;
  _L132 = T_Traction;
  T_berem = _L77;
  _L131 = T_berem;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L125, T_part);
  _L143 = _L125.inhComp;
  _L154 = 5.0;
  I1_1 = _L154;
  _L1_1 = I1_1;
  _L150 = 0.8;
  _L157 = _L150 * _L108;
  I2_1 = _L157;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L156 = Ma_Output_1;
  /* 4 */ if (_L138) {
    _L152 = _L154;
  }
  else {
    _L152 = _L156;
  }
  _L123.Traction = _L132;
  _L123.berem = _L131;
  _L123.bs = _L108;
  _L123.bs1 = _L115;
  _L123.bs2 = _L116;
  _L123.inhComp = _L143;
  _L123.indication = _L152;
  kcg_copy_T_trac_t_TargetLimits_Pkg(T, &_L123);
  _L136 = V_target;
  /* 1 */ calcBec_TargetLimits_Pkg(&_L85, _L136, _L147, &_L123, &_L135);
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L135);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


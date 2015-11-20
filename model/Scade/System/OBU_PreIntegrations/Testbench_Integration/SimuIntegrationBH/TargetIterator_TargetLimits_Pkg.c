/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetIterator */
void TargetIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetIterator::index */ kcg_int index,
  /* TargetLimits_Pkg::TargetIterator::Akku_in */ TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* TargetLimits_Pkg::TargetIterator::target */ Target_real_T_TargetManagement_types *target,
  /* TargetLimits_Pkg::TargetIterator::targetCurve */ ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* TargetLimits_Pkg::TargetIterator::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetIterator::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetIterator::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetIterator::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::TargetIterator::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetIterator::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::TargetIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::TargetIterator::Akku_out */ TargetIteratorAkku_TargetLimits_Pkg *Akku_out)
{
  /* TargetLimits_Pkg::TargetIterator */
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  /* TargetLimits_Pkg::TargetIterator */
  static kcg_bool _3_op_call;
  /* TargetLimits_Pkg::TargetIterator */
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::TargetIterator */
  static kcg_bool _1_op_call;
  /* TargetLimits_Pkg::TargetIterator */
  static kcg_bool ck_every;
  /* TargetLimits_Pkg::TargetIterator */
  static kcg_bool _4_ck_every;
  /* TargetLimits_Pkg::TargetIterator::valid */
  static kcg_bool valid;
  /* TargetLimits_Pkg::TargetIterator::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::TargetIterator::_L1 */
  static kcg_bool _L1;
  /* TargetLimits_Pkg::TargetIterator::_L9 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L9;
  /* TargetLimits_Pkg::TargetIterator::_L26 */
  static TargetIteratorAkku_TargetLimits_Pkg _L26;
  /* TargetLimits_Pkg::TargetIterator::_L34 */
  static kcg_bool _L34;
  /* TargetLimits_Pkg::TargetIterator::_L35 */
  static TargetIteratorAkku_TargetLimits_Pkg _L35;
  /* TargetLimits_Pkg::TargetIterator::_L45 */
  static TargetIteratorAkku_TargetLimits_Pkg _L45;
  /* TargetLimits_Pkg::TargetIterator::_L46 */
  static TargetIteratorAkku_TargetLimits_Pkg _L46;
  /* TargetLimits_Pkg::TargetIterator::_L47 */
  static kcg_int _L47;
  /* TargetLimits_Pkg::TargetIterator::_L49 */
  static kcg_bool _L49;
  /* TargetLimits_Pkg::TargetIterator::_L50 */
  static TargetType_T_TargetManagement_types _L50;
  /* TargetLimits_Pkg::TargetIterator::_L54 */
  static TargetType_T_TargetManagement_types _L54;
  /* TargetLimits_Pkg::TargetIterator::_L53 */
  static kcg_bool _L53;
  /* TargetLimits_Pkg::TargetIterator::_L74 */
  static bec_t_TargetLimits_Pkg _L74;
  /* TargetLimits_Pkg::TargetIterator::_L73 */
  static T_trac_t_TargetLimits_Pkg _L73;
  /* TargetLimits_Pkg::TargetIterator::_L72 */
  static V_internal_real_Type_SDM_Types_Pkg _L72;
  /* TargetLimits_Pkg::TargetIterator::_L71 */
  static V_internal_real_Type_SDM_Types_Pkg _L71;
  /* TargetLimits_Pkg::TargetIterator::_L75 */
  static trainData_internal_t_SDM_Types_Pkg _L75;
  /* TargetLimits_Pkg::TargetIterator::_L76 */
  static odometry_T_Obu_BasicTypes_Pkg _L76;
  /* TargetLimits_Pkg::TargetIterator::_L77 */
  static t_Brake_t_SDMModelPkg _L77;
  /* TargetLimits_Pkg::TargetIterator::_L78 */
  static TargetType_T_TargetManagement_types _L78;
  /* TargetLimits_Pkg::TargetIterator::_L79 */
  static L_internal_real_Type_SDM_Types_Pkg _L79;
  /* TargetLimits_Pkg::TargetIterator::_L80 */
  static Target_real_T_TargetManagement_types _L80;
  /* TargetLimits_Pkg::TargetIterator::_L81 */
  static V_internal_real_Type_SDM_Types_Pkg _L81;
  /* TargetLimits_Pkg::TargetIterator::_L82 */
  static TargetType_T_TargetManagement_types _L82;
  /* TargetLimits_Pkg::TargetIterator::_L83 */
  static Target_real_T_TargetManagement_types _L83;
  /* TargetLimits_Pkg::TargetIterator::_L84 */
  static TargetType_T_TargetManagement_types _L84;
  /* TargetLimits_Pkg::TargetIterator::_L87 */
  static Target_real_T_TargetManagement_types _L87;
  /* TargetLimits_Pkg::TargetIterator::_L86 */
  static TargetType_T_TargetManagement_types _L86;
  /* TargetLimits_Pkg::TargetIterator::_L95 */
  static TargetIteratorAkku_TargetLimits_Pkg _L95;
  /* TargetLimits_Pkg::TargetIterator::_L97 */
  static T_trac_t_TargetLimits_Pkg _L97;
  /* TargetLimits_Pkg::TargetIterator::_L101 */
  static kcg_bool _L101;
  /* TargetLimits_Pkg::TargetIterator::_L100 */
  static V_internal_real_Type_SDM_Types_Pkg _L100;
  /* TargetLimits_Pkg::TargetIterator::_L102 */
  static kcg_bool _L102;
  /* TargetLimits_Pkg::TargetIterator::_L103 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L103;
  /* TargetLimits_Pkg::TargetIterator::_L104 */
  static T_internal_real_Type_SDM_Types_Pkg _L104;
  /* TargetLimits_Pkg::TargetIterator::_L107 */
  static L_internal_real_Type_SDM_Types_Pkg _L107;
  /* TargetLimits_Pkg::TargetIterator::_L108 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L108;
  /* TargetLimits_Pkg::TargetIterator::_L109 */
  static kcg_bool _L109;
  /* TargetLimits_Pkg::TargetIterator::_L111 */
  static kcg_real _L111;
  /* TargetLimits_Pkg::TargetIterator::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::TargetIterator::_L112 */
  static V_internal_real_Type_SDM_Types_Pkg _L112;
  /* TargetLimits_Pkg::TargetIterator::_L113 */
  static kcg_int _L113;
  /* TargetLimits_Pkg::TargetIterator::_L115 */
  static V_internal_real_Type_SDM_Types_Pkg _L115;
  /* TargetLimits_Pkg::TargetIterator::_L114 */
  static Target_real_T_TargetManagement_types _L114;
  /* TargetLimits_Pkg::TargetIterator::_L116 */
  static TargetIteratorAkku_TargetLimits_Pkg _L116;
  /* TargetLimits_Pkg::TargetIterator::_L117 */
  static kcg_bool _L117;
  /* TargetLimits_Pkg::TargetIterator::_L119 */
  static kcg_bool _L119;
  /* TargetLimits_Pkg::TargetIterator::_L120 */
  static kcg_bool _L120;
  /* TargetLimits_Pkg::TargetIterator::_L121 */
  static kcg_int _L121;
  /* TargetLimits_Pkg::TargetIterator::_L122 */
  static TargetIteratorAkku_TargetLimits_Pkg _L122;
  /* TargetLimits_Pkg::TargetIterator::_L123 */
  static TargetIteratorAkku_TargetLimits_Pkg _L123;
  /* TargetLimits_Pkg::TargetIterator::_L124 */
  static kcg_int _L124;
  /* TargetLimits_Pkg::TargetIterator::_L125 */
  static kcg_int _L125;
  /* TargetLimits_Pkg::TargetIterator::_L126 */
  static TargetType_T_TargetManagement_types _L126;
  /* TargetLimits_Pkg::TargetIterator::_L127 */
  static kcg_bool _L127;
  /* TargetLimits_Pkg::TargetIterator::_L128 */
  static kcg_bool _L128;
  
  _L50 = invalid_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&_L87, target);
  _L86 = _L87.targetType;
  _L49 = _L50 != _L86;
  valid = _L49;
  _L119 = valid;
  ck_every = _L119;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L103, targetCurve);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L75, trainData_int);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L76, odometry);
  kcg_copy_t_Brake_t_SDMModelPkg(&_L77, T_b);
  kcg_copy_Target_real_T_TargetManagement_types(&_L80, target);
  _L81 = _L80.speed;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L95, Akku_in);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L97, &_L95.T);
  /* 1 */
  surplusTractionDeltas_TargetLimits_Pkg(
    &_L75,
    &_L76,
    &_L77,
    _L81,
    &_L97,
    &_L74,
    &_L71,
    &_L73,
    &_L72);
  kcg_copy_Target_real_T_TargetManagement_types(&_L114, target);
  _L115 = _L114.speed;
  _L107 = D_maxsafefront;
  _L104 = T_driver_SDM_Types_Pkg;
  _L109 = guiCurveEnabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L108, GUIcurve);
  /* ck_TargetIterator */ if (ck_every) {
    /* 1 */
    v_SBI2_TargetLimits_Pkg(
      &_L103,
      _L71,
      _L115,
      &_L74,
      _L107,
      _L104,
      _L109,
      &_L108,
      &_L73,
      &_3_op_call,
      &_2_op_call);
  }
  _L117 = valid;
  _4_ck_every = _L117;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L9, targetCurve);
  /* ck_TargetIterator */ if (_4_ck_every) {
    /* 1 */
    d_SBI2_TargetLimits_Pkg(&_L9, &_L74, _L71, &_L73, &_1_op_call, &op_call);
    _L2 = op_call;
    _L1 = _1_op_call;
  }
  else {
    _L2 = - 1.0;
    _L1 = kcg_false;
  }
  *goOn = _L49;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L26, Akku_in);
  _L126 = invalid_TargetManagement_types;
  _L78 = _L26.ttype;
  _L53 = _L126 != _L78;
  _L79 = _L26.SBI2;
  _L34 = /* 1 */ isLEValid_TargetLimits_Pkg(_L53, _L79, _L1, _L2);
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L46, Akku_in);
  _L47 = index;
  kcg_copy_Target_real_T_TargetManagement_types(&_L83, target);
  _L82 = _L83.targetType;
  _L54 = invalid_TargetManagement_types;
  /* 2 */ if (_L1) {
    _L84 = _L82;
  }
  else {
    _L84 = _L54;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L116, Akku_in);
  _L112 = _L116.V_P_MRDT_ebd;
  _L113 = _L116.V_P_MRDT_index;
  _L45.SBI2 = _L2;
  _L45.index = _L47;
  _L45.ttype = _L84;
  kcg_copy_bec_t_TargetLimits_Pkg(&_L45.bec, &_L74);
  _L45.V_est = _L71;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L45.T, &_L73);
  _L45.V_ura = _L72;
  _L45.V_P_MRDT_ebd = _L112;
  _L45.V_P_MRDT_index = _L113;
  /* 1 */ if (_L34) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L35, &_L46);
  }
  else {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L35, &_L45);
  }
  /* ck_TargetIterator */ if (ck_every) {
    _L100 = _2_op_call;
    _L101 = _3_op_call;
  }
  else {
    _L100 = 0.0;
    _L101 = kcg_false;
  }
  _L121 = 0;
  _L120 = _L113 >= _L121;
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    _L120,
    _L112,
    _L101,
    _L100,
    &_L102,
    &_L110,
    &_L111);
  _L128 = !_L110;
  _L127 = _L102 | _L128;
  _L125 = index;
  /* 3 */ if (_L127) {
    _L124 = _L113;
  }
  else {
    _L124 = _L125;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L123, &_L35);
  if (kcg_true) {
    _L123.V_P_MRDT_index = _L124;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L122, &_L123);
  if (kcg_true) {
    _L122.V_P_MRDT_ebd = _L111;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(Akku_out, &_L122);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetIterator_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


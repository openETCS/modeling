/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::calcMATargets */
void calcMATargets_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::calcMATargets::MA_section */ MA_section_real_T_TargetManagement_types *MA_section,
  /* TargetManagement_pkg::internalOperators::calcMATargets::EOA_Target */ Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::calcMATargets::SvL_LoA_Target */ Target_real_T_TargetManagement_types *SvL_LoA_Target)
{
  /* TargetManagement_pkg::internalOperators::calcMATargets::MA_TargetLocation */
  static L_internal_real_Type_SDM_Types_Pkg MA_TargetLocation;
  /* TargetManagement_pkg::internalOperators::calcMATargets::MA_TargetSpeed */
  static V_internal_real_Type_SDM_Types_Pkg MA_TargetSpeed;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L22 */
  static Target_real_T_TargetManagement_types _L22;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L24 */
  static TargetType_T_TargetManagement_types _L24;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L35 */
  static Target_real_T_TargetManagement_types _L35;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L33 */
  static TargetType_T_TargetManagement_types _L33;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L62 */
  static kcg_bool _L62;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L63 */
  static kcg_real _L63;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L64 */
  static Target_real_T_TargetManagement_types _L64;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L65 */
  static Target_real_T_TargetManagement_types _L65;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L66 */
  static Target_real_T_TargetManagement_types _L66;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L68 */
  static V_internal_real_Type_SDM_Types_Pkg _L68;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L69 */
  static V_internal_real_Type_SDM_Types_Pkg _L69;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L70 */
  static V_internal_real_Type_SDM_Types_Pkg _L70;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L71 */
  static L_internal_real_Type_SDM_Types_Pkg _L71;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L73 */
  static Target_real_T_TargetManagement_types _L73;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L74 */
  static TargetType_T_TargetManagement_types _L74;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L78 */
  static L_internal_real_Type_SDM_Types_Pkg _L78;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L77 */
  static V_internal_real_Type_SDM_Types_Pkg _L77;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L79 */
  static MA_section_real_T_TargetManagement_types _L79;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L80 */
  static L_internal_real_Type_SDM_Types_Pkg _L80;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L81 */
  static V_internal_real_Type_SDM_Types_Pkg _L81;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L82 */
  static kcg_bool _L82;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L83 */
  static L_internal_real_Type_SDM_Types_Pkg _L83;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L84 */
  static kcg_bool _L84;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L85 */
  static L_internal_real_Type_SDM_Types_Pkg _L85;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L86 */
  static L_internal_real_Type_SDM_Types_Pkg _L86;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L88 */
  static L_internal_real_Type_SDM_Types_Pkg _L88;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L90 */
  static TargetType_T_TargetManagement_types _L90;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L91 */
  static TargetType_T_TargetManagement_types _L91;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L92 */
  static TargetType_T_TargetManagement_types _L92;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L96 */
  static kcg_bool _L96;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L95 */
  static MA_section_real_T_TargetManagement_types _L95;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L98 */
  static TargetType_T_TargetManagement_types _L98;
  
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L79, MA_section);
  _L81 = _L79.EOA.TargetSpeed;
  MA_TargetSpeed = _L81;
  _L68 = MA_TargetSpeed;
  _L63 = 0.0;
  _L62 = _L68 > _L63;
  kcg_copy_Target_real_T_TargetManagement_types(
    &_L66,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L95, MA_section);
  _L96 = _L95.valid;
  _L33 = EoA_TargetManagement_types;
  _L98 = invalid_TargetManagement_types;
  /* 9 */ if (_L96) {
    _L91 = _L33;
  }
  else {
    _L91 = _L98;
  }
  _L80 = _L79.EOA.Location;
  MA_TargetLocation = _L80;
  _L71 = MA_TargetLocation;
  _L70 = MA_TargetSpeed;
  _L35.targetType = _L91;
  _L35.distance = _L71;
  _L35.speed = _L70;
  /* 5 */ if (_L62) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L64, &_L66);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&_L64, &_L35);
  }
  kcg_copy_Target_real_T_TargetManagement_types(EOA_Target, &_L64);
  _L24 = SvL_TargetManagement_types;
  /* 10 */ if (_L96) {
    _L92 = _L24;
  }
  else {
    _L92 = _L98;
  }
  _L84 = _L79.OL_valid;
  _L86 = _L79.Overlap;
  _L82 = _L79.DP_valid;
  _L85 = _L79.DangerPoint;
  /* 6 */ if (_L82) {
    _L83 = _L85;
  }
  else {
    _L83 = _L80;
  }
  /* 7 */ if (_L84) {
    _L88 = _L86;
  }
  else {
    _L88 = _L83;
  }
  _L69 = MA_TargetSpeed;
  _L22.targetType = _L92;
  _L22.distance = _L88;
  _L22.speed = _L69;
  _L74 = LoA_TargetManagement_types;
  /* 8 */ if (_L96) {
    _L90 = _L74;
  }
  else {
    _L90 = _L98;
  }
  _L78 = MA_TargetLocation;
  _L77 = MA_TargetSpeed;
  _L73.targetType = _L90;
  _L73.distance = _L78;
  _L73.speed = _L77;
  /* 5 */ if (_L62) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L65, &_L73);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&_L65, &_L22);
  }
  kcg_copy_Target_real_T_TargetManagement_types(SvL_LoA_Target, &_L65);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcMATargets_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


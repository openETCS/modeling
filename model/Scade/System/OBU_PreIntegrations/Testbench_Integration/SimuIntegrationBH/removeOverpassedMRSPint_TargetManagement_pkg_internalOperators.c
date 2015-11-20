/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint */
void removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Targets */ Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::d_safe_max_front */ L_internal_real_Type_SDM_Types_Pkg d_safe_max_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Cond */ kcg_bool *Cond,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::TargetsReduced */ Target_list_MRSP_real_T_TargetManagement_types *TargetsReduced)
{
  static kcg_int i;
  static V_internal_real_Type_SDM_Types_Pkg noname;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L1 */
  static Target_list_MRSP_real_T_TargetManagement_types _L1;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L5 */
  static Target_real_T_TargetManagement_types _L5;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L10 */
  static TargetType_T_TargetManagement_types _L10;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L8 */
  static V_internal_real_Type_SDM_Types_Pkg _L8;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L11 */
  static kcg_bool _L11;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L14 */
  static kcg_bool _L14;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L15 */
  static Target_list_MRSP_real_T_TargetManagement_types _L15;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L16 */
  static array_169123 _L16;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L17 */
  static Target_list_MRSP_real_T_TargetManagement_types _L17;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L19 */
  static Target_list_MRSP_real_T_TargetManagement_types _L19;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L21 */
  static array_168535 _L21;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L22 */
  static Target_real_T_TargetManagement_types _L22;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L23 */
  static kcg_bool _L23;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L24 */
  static TargetType_T_TargetManagement_types _L24;
  
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L1, Targets);
  _L2 = d_safe_max_front;
  _L24 = MRSP_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&_L5, &_L1[0]);
  _L10 = _L5.targetType;
  _L23 = _L24 == _L10;
  _L9 = _L5.distance;
  _L14 = _L9 <= _L2;
  _L11 = _L23 & _L14;
  *Cond = _L11;
  kcg_copy_array_169123(&_L16, (array_169123 *) &_L1[1]);
  kcg_copy_Target_real_T_TargetManagement_types(
    &_L22,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L21[i], &_L22);
  }
  kcg_copy_array_169123(&_L19[0], &_L16);
  kcg_copy_array_168535(&_L19[109], &_L21);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L17, Targets);
  /* 1 */ if (_L11) {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L15, &_L19);
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L15, &_L17);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    TargetsReduced,
    &_L15);
  _L8 = _L5.speed;
  noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


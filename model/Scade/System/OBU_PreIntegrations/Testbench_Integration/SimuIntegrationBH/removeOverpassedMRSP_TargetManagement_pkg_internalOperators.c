/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::Targets */ Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::TargetsOut */ Target_list_MRSP_real_T_TargetManagement_types *TargetsOut,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::updated */ kcg_bool *updated)
{
  static kcg_int i1;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static Target_list_MRSP_real_T_TargetManagement_types acc;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L4 */
  static Target_list_MRSP_real_T_TargetManagement_types _L4;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L6 */
  static kcg_int _L6;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L7 */
  static array_real_110 _L7;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L9 */
  static kcg_bool _L9;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L10 */
  static kcg_int _L10;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L14 */
  static kcg_bool _L14;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L12 */
  static kcg_bool _L12;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L11 */
  static Target_list_MRSP_real_T_TargetManagement_types _L11;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L20 */
  static TargetType_T_TargetManagement_types _L20;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L21 */
  static kcg_bool _L21;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L22 */
  static TargetType_T_TargetManagement_types _L22;
  
  _L3 = d_max_safe_front;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L11, Targets);
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    _L7[i1] = _L3;
  }
  _L20 = _L11[0].targetType;
  _L22 = MRSP_TargetManagement_types;
  _L21 = _L20 == _L22;
  _L19 = _L11[0].distance;
  _L12 = _L19 <= _L3;
  _L14 = _L21 & _L12;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L4, &_L11);
  if (_L14) {
    for (i = 0; i < 110; i++) {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&acc, &_L4);
      /* 1 */
      removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
        &acc,
        _L7[i],
        &cond_iterw,
        &_L4);
      _L6 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L6 = 0;
  }
  _L10 = 1;
  _L9 = _L6 > _L10;
  *updated = _L9;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(TargetsOut, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


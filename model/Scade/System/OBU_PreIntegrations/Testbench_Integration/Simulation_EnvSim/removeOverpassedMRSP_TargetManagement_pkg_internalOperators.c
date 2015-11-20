/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::Targets */Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::d_max_safe_front */L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::TargetsOut */Target_list_MRSP_real_T_TargetManagement_types *TargetsOut,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::updated */kcg_bool *updated)
{
  static Target_list_MRSP_real_T_TargetManagement_types tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L6 */
  static kcg_int _L6;
  
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(TargetsOut, Targets);
  if (((*Targets)[0].targetType == MRSP_TargetManagement_types) &
    ((*Targets)[0].distance <= d_max_safe_front)) {
    for (i = 0; i < 110; i++) {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
        &tmp1,
        TargetsOut);
      /* 1 */
      removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
        &tmp1,
        d_max_safe_front,
        &tmp,
        TargetsOut);
      _L6 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L6 = 0;
  }
  *updated = _L6 > 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */


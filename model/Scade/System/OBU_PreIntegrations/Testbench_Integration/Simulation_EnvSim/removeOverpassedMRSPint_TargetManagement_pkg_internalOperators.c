/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint */
void removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Targets */Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::d_safe_max_front */L_internal_real_Type_SDM_Types_Pkg d_safe_max_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Cond */kcg_bool *Cond,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::TargetsReduced */Target_list_MRSP_real_T_TargetManagement_types *TargetsReduced)
{
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::_L21 */
  static array__158645 _L21;
  
  kcg_copy_Target_real_T_TargetManagement_types(
    &_L21[0],
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  *Cond = (MRSP_TargetManagement_types == (*Targets)[0].targetType) &
    ((*Targets)[0].distance <= d_safe_max_front);
  if (*Cond) {
    kcg_copy_array__165285(
      &(*TargetsReduced)[0],
      (array__165285 *) &(*Targets)[1]);
    kcg_copy_array__158645(&(*TargetsReduced)[109], &_L21);
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      TargetsReduced,
      Targets);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */


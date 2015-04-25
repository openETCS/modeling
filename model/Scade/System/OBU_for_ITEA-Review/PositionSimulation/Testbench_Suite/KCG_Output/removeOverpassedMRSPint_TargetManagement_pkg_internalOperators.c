/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  *Cond = ((*Targets)[0].distance <= d_safe_max_front) & (*Targets)[0].valid;
  if (*Cond) {
    kcg_copy_array_61059(&(*TargetsReduced)[0], (array_61059 *) &(*Targets)[1]);
    kcg_copy_Target_real_T_TargetManagement_types(
      &(&(*TargetsReduced)[199])[0],
      (Target_real_T_TargetManagement_types *)
        &emptyTargetMRSP_TargetManagement_pkg);
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      TargetsReduced,
      Targets);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


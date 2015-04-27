/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar */
kcg_bool ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::Condition */ kcg_bool Condition;
  
  Condition = (M_MODE_Reversing == (*DMI_dynamic).mode) |
    ((M_MODE_Full_Supervision == (*DMI_dynamic).mode) &
      ((*DMI_dynamic).sup_status != CSM_DMI_Types_Pkg));
  return Condition;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


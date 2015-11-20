/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital */
kcg_bool ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital::DMI_dynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital::Condition */ kcg_bool Condition;
  
  Condition = (M_MODE_Reversing == (*DMI_dynamic).mode) |
    ((((*DMI_dynamic).mode == M_MODE_Full_Supervision) | ((*DMI_dynamic).mode ==
          M_MODE_On_Sight) | ((*DMI_dynamic).mode ==
          M_MODE_Staff_Responsible)) & ((*DMI_dynamic).sup_status !=
        CSM_DMI_Types_Pkg));
  return Condition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */


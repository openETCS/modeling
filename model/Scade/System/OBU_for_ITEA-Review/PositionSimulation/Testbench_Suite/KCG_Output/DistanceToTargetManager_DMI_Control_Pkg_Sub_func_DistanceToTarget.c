/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

void DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->init = kcg_true;
  outC->ConditionDistanceToTarget = kcg_true;
  outC->ConditionTargetBar = kcg_true;
  outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_true;
  outC->DistanceToTargetBarVisibility_toDisplay = kcg_true;
  outC->InterpolatedDistanceToTarget_toDisplay = 0.0;
  outC->DistanceToTarget_toDisplay = 0.0;
}


void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::localDistanceToTarget */ kcg_real localDistanceToTarget;
  
  if ((*DMI_dynamic).valid) {
    outC->ConditionTargetBar = /* 1 */
      ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
        DMI_dynamic);
    outC->ConditionDistanceToTarget = /* 2 */
      ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
        DMI_dynamic);
  }
  else if (outC->init) {
    outC->ConditionTargetBar = kcg_false;
    outC->ConditionDistanceToTarget = kcg_false;
  }
  localDistanceToTarget = (kcg_real) (*DMI_dynamic).location_brake_target /
    100.0;
  if (outC->ConditionTargetBar) {
    outC->DistanceToTargetBarVisibility_toDisplay = kcg_true;
    outC->InterpolatedDistanceToTarget_toDisplay = /* 1 */
      CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
        localDistanceToTarget);
  }
  else {
    outC->DistanceToTargetBarVisibility_toDisplay = kcg_false;
    if (outC->init) {
      outC->InterpolatedDistanceToTarget_toDisplay = 0.0;
    }
  }
  if (outC->ConditionDistanceToTarget) {
    outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_true;
    outC->DistanceToTarget_toDisplay = localDistanceToTarget;
  }
  else {
    outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
    if (outC->init) {
      outC->DistanceToTarget_toDisplay = 0.0;
    }
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */


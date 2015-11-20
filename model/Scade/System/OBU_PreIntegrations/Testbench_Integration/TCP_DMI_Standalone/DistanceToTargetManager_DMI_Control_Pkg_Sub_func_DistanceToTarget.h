/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:31
*************************************************************$ */
#ifndef _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTarget_toDisplay */ DistanceToTarget_toDisplay;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::InterpolatedDistanceToTarget_toDisplay */ InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarVisibility_toDisplay */ DistanceToTargetBarVisibility_toDisplay;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetVisibilityDigital_toDisplay */ DistanceToTargetVisibilityDigital_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::ConditionTargetBar */ ConditionTargetBar;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::ConditionDistanceToTarget */ ConditionDistanceToTarget;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
extern void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DMI_dynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#endif /* _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2015-11-20T19:43:31
*************************************************************$ */


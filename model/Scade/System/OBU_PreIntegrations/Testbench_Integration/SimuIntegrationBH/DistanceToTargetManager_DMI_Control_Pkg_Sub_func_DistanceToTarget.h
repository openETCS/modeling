/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L19 */ _L19;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget /* 1 */ _1_Context_1;
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget /* 1 */ Context_1;
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */ ck_every;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */ _2_ck_every;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarIfBlock */ DistanceToTargetBarIfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetA2IfBlock::then::_L2 */ _L2_DistanceToTargetA2IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetA2IfBlock::then::_L1 */ _L1_DistanceToTargetA2IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetA2IfBlock::else::_L1 */ _L13_DistanceToTargetA2IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarIfBlock::then::_L15 */ _L15_DistanceToTargetBarIfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarIfBlock::then::_L6 */ _L6_DistanceToTargetBarIfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarIfBlock::then::_L2 */ _L2_DistanceToTargetBarIfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarIfBlock::else::_L5 */ _L5_DistanceToTargetBarIfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetA2IfBlock */ DistanceToTargetA2IfBlock_clock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::ConditionTargetBar */ ConditionTargetBar;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::localDistanceToTarget */ localDistanceToTarget;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::ConditionDistanceToTarget */ ConditionDistanceToTarget;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L8 */ _L8;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L10 */ _L10;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L11 */ _L11;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L21 */ _L21;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L20 */ _L20;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L22 */ _L22;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::_L23 */ _L23;
} outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
extern void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


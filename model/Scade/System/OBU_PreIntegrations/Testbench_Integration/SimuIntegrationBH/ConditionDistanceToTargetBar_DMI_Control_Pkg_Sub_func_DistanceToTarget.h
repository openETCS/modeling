/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::Condition */ Condition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L4 */ _L4;
  M_MODE /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L2 */ _L2;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L5 */ _L5;
  M_MODE /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L6 */ _L6;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L11 */ _L11;
  M_MODE /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L12 */ _L12;
  M_MODE /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::_L13 */ _L13;
} outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar */
extern void ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void ConditionDistanceToTargetBar_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ConditionDistanceToTargetBar_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


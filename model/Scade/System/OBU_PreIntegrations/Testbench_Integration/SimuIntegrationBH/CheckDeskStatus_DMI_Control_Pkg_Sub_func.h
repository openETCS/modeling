/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_
#define _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output1 */ Output1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output2 */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::storeTrainData */ storeTrainData;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L6 */ _L6;
  cab_ID_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L7 */ _L7;
  cab_ID_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L8 */ _L8;
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L10 */ _L10;
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L11 */ _L11;
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::_L12 */ _L12;
} outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::CheckDeskStatus */
extern void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::TIU_trainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckDeskStatus_init_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


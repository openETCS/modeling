/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_
#define _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::CheckResult */ CheckResult;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils /* 1 */ Context_1[8];
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils /* 2 */ Context_2[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L11 */ _L11;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L12 */ _L12;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L13 */ _L13;
  array_int_8 /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L14 */ _L14;
  array_int_5 /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L15 */ _L15;
  array_int_8 /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L16 */ _L16;
  array_int_5 /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L17 */ _L17;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L18 */ _L18;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L20 */ _L20;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L21 */ _L21;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L22 */ _L22;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L23 */ _L23;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L24 */ _L24;
} outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker */
extern void LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::GroupIndex */ kcg_int GroupIndex,
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::SymbolIndex */ kcg_int SymbolIndex,
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelModeSymolsChecker_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelModeSymolsChecker_init_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


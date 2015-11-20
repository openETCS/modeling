/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_
#define _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::condition */ condition;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::IndexLevel */ IndexLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L5 */ _L5;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L8 */ _L8;
  M_LEVEL /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L20 */ _L20;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L21 */ _L21;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L22 */ _L22;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L23 */ _L23;
  NID_STM_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L38 */ _L38;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L2 */ _L2;
  M_LEVEL /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L57 */ _L57;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L56 */ _L56;
  M_LEVEL /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L58 */ _L58;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L77 */ _L77;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L80 */ _L80;
  kcg_int /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::_L81 */ _L81;
} outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::LevelList_Iterator */
extern void LevelList_Iterator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::level */ DMI_level_T_DMI_Types_Pkg *level,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::N_level */ kcg_int N_level,
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelList_Iterator_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


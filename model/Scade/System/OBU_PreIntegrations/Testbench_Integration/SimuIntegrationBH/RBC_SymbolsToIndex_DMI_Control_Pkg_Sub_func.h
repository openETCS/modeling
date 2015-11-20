/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func_H_
#define _RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::symbol */ symbol;
  kcg_bool /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::visibility */ visibility;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L5 */ _L5;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L11 */ _L11;
  kcg_int /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::_L12 */ _L12;
} outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex */
extern void RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex::connectionEstabilished */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionEstabilished,
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_SymbolsToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_SymbolsToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


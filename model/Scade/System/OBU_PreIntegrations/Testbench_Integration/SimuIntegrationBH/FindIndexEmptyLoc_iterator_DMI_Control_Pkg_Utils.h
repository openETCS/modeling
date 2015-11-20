/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_
#define _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::condition */ condition;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::accout */ accout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L19 */ _L19;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L17 */ _L17;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L21 */ _L21;
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L22 */ _L22;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L25 */ _L25;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L29 */ _L29;
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::_L30 */ _L30;
} outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator */
extern void FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::Acc */ kcg_bool Acc,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::in_digit_display */ kcg_int in_digit_display,
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


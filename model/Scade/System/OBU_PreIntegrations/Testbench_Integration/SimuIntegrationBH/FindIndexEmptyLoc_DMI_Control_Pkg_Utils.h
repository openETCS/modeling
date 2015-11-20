/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_
#define _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::index */ index;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::DigitFull */ DigitFull;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils /* 1 */ Context_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_9 /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::_L15 */ _L15;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::_L18 */ _L18;
  kcg_bool /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::_L17 */ _L17;
} outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc */
extern void FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::in_digit_display */ array_int_9 *in_digit_display,
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


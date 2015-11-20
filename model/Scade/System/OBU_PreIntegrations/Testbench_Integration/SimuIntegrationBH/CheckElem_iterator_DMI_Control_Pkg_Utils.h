/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckElem_iterator_DMI_Control_Pkg_Utils_H_
#define _CheckElem_iterator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::condition */ condition;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L8 */ _L8;
} outC_CheckElem_iterator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::CheckElem_iterator */
extern void CheckElem_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::acc */ kcg_bool acc,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::elem */ kcg_int elem,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::key */ kcg_int key,
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckElem_iterator_reset_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckElem_iterator_init_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckElem_iterator_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckElem_iterator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


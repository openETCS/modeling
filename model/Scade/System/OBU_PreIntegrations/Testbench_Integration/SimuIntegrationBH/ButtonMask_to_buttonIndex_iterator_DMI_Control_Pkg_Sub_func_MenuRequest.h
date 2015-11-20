/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest_H_
#define _ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::valueout */ valueout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::_L5 */ _L5;
} outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator */
extern void ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::valuein */ kcg_bool valuein,
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ButtonMask_to_buttonIndex_iterator_reset_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ButtonMask_to_buttonIndex_iterator_init_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


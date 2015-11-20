/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUpTypeIndex */ scrollUpTypeIndex;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */ scrollLevel;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDownTypeIndex */ scrollDownTypeIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController */
extern void ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUp */ kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDown */ kcg_bool scrollDown,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::isMoreThanFive */ kcg_bool isMoreThanFive,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::numE */ kcg_int numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


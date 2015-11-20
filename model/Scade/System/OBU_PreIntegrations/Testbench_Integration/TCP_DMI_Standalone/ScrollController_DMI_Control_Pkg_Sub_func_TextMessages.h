/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUp */kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDown */kcg_bool scrollDown,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::isMoreThanFive */kcg_bool isMoreThanFive,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::numE */kcg_int numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */


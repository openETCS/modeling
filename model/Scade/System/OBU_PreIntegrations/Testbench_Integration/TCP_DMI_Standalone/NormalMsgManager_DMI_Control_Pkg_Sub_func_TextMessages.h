/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::IndexFixedMsg */ IndexFixedMsg;
  array_char_30_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ArrayPlainText */ ArrayPlainText;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Array_hh */ Array_hh;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Array_mm */ Array_mm;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::isImportantMsg */ isImportantMsg;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ScrollUpEnableIndex_toDisplay */ ScrollUpEnableIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ScrollDownEnableIndex_toDisplay */ ScrollDownEnableIndex_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollLevel */ scrollLevel;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::isMoreThanFive */ rem_isMoreThanFive;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
extern void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */array__31785 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollUp */kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollDown */kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */


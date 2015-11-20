/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::isMoreThanFive */ isMoreThanFive;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollLevel */ scrollLevel;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _3_Context_1;
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _2_Context_1[10];
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::LocalArray */ LocalArray;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L26 */ _L26;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L24 */ _L24;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L23 */ _L23;
  array_168969 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L22 */ _L22;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L21 */ _L21;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L20 */ _L20;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L19 */ _L19;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L28 */ _L28;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L162 */ _L162;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L172 */ _L172;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L176 */ _L176;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L188 */ _L188;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L189 */ _L189;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L190 */ _L190;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L195 */ _L195;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L197 */ _L197;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L204 */ _L204;
  array_char_30_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L198 */ _L198;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L67 */ _L67;
  array_int_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L205 */ _L205;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L206 */ _L206;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L207 */ _L207;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L210 */ _L210;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L211 */ _L211;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L217 */ _L217;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L218 */ _L218;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L219 */ _L219;
} outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
extern void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */ array_169451 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */ array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */ array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */ kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollUp */ kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollDown */ kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void NormalMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


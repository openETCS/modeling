/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::FixIndex */ FixIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils /* 1 */ _1_Context_1[27];
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L1 */ _L1;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L6 */ _L6;
  Array_DMI_Q_Text /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L27 */ _L27;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L26 */ _L26;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L25 */ _L25;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L23 */ _L23;
  Array_DMI_Q_Text /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L21 */ _L21;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L20 */ _L20;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L18 */ _L18;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L19 */ _L19;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L28 */ _L28;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L76 */ _L76;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L78 */ _L78;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L77 */ _L77;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L80 */ _L80;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L88 */ _L88;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L79 */ _L79;
} outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray */
extern void ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::msg */ MsgStructure *msg,
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ShowMsg_FixIndexArray_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ShowMsg_FixIndexArray_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


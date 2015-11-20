/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::MsgIsPlainText */ MsgIsPlainText;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::MsgIsFixText */ MsgIsFixText;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L11 */ _L11;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L1 */ _L1;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L13 */ _L13;
  L_TEXT /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L14 */ _L14;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L16 */ _L16;
} outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText */
extern void CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::msg */ MsgStructure *msg,
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckMsgIsFixText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMsgIsFixText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output1 */ Output1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output2 */ Output2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output3 */ Output3;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::ackMsg1 */ ackMsg1;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::askMsg2 */ askMsg2;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L17 */ _L17;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L16 */ _L16;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L15 */ _L15;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L14 */ _L14;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L13 */ _L13;
  Q_TEXTCLASS /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L12 */ _L12;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L9 */ _L9;
  Q_TEXTCLASS /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L8 */ _L8;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L5 */ _L5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L3 */ _L3;
  Q_TEXTCLASS /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L1 */ _L1;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L18 */ _L18;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L19 */ _L19;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L20 */ _L20;
  Q_TEXTCONFIRM /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L21 */ _L21;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L23 */ _L23;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L24 */ _L24;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L25 */ _L25;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L27 */ _L27;
} outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot */
extern void CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::DMI_text_message */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckAckOrNot_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckAckOrNot_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


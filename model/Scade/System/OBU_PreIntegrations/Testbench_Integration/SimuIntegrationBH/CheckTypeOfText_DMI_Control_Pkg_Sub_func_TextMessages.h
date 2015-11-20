/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Output1 */ Output1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Output2 */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L1 */ _L1;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L3 */ _L3;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L5 */ _L5;
  L_TEXT /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L11 */ _L11;
} outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText */
extern void CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Queue */ array_170229 *Queue,
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


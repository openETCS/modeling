/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insert */ insert;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insertAuxi */ insertAuxi;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::insertImp */ insertImp;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::_L7 */ _L7;
} outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete */
extern void CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::isImportant */ kcg_bool isImportant,
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


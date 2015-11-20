/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::accout */ accout;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::output */ output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L18 */ _L18;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L17 */ _L17;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L16 */ _L16;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L15 */ _L15;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L14 */ _L14;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::_L13 */ _L13;
} outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator */
extern void Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::acc_in */ kcg_bool acc_in,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_1 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_2 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


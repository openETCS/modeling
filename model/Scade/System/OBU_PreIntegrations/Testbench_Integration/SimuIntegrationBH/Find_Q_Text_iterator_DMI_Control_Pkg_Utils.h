/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Find_Q_Text_iterator_DMI_Control_Pkg_Utils_H_
#define _Find_Q_Text_iterator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::condout */ condout;
  kcg_bool /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::accout */ accout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L1 */ _L1;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L6 */ _L6;
  DMI_Q_TEXT_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::_L2 */ _L2;
} outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::Find_Q_Text_iterator */
extern void Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::acc_in */ kcg_bool acc_in,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_1 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_2 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC);

extern void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Utils(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Find_Q_Text_iterator_init_DMI_Control_Pkg_Utils(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Find_Q_Text_iterator_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


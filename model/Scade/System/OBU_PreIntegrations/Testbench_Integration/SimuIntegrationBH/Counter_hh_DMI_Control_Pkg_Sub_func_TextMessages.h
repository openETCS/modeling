/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L4 */ _L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L6 */ _L6;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L5 */ _L5;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L3 */ _L3;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L2 */ _L2;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::_L1 */ _L1;
} outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh */
extern void Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Incr */ kcg_real Incr,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Reset */ kcg_bool Reset,
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void Counter_hh_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Counter_hh_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh */
extern void Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Incr */kcg_real Incr,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Reset */kcg_bool Reset,
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void Counter_hh_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::rippleclock */ rippleclock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::count */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L5 */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ModCount */
extern void ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::incre */kcg_bool incre,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::Modulo */kcg_int Modulo,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::initialValue */kcg_int initialValue,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::outTimeArray */ outTimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L32 */ _L32;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L28 */ _L28;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L25 */ _L25;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L22 */ _L22;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L21 */ _L21;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L18 */ _L18;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L58 */ _L58;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L62 */ _L62;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L65 */ _L65;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L64 */ _L64;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L68 */ _L68;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L69 */ _L69;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L70 */ _L70;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::_L71 */ _L71;
} outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack */
extern void SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::acc */ array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::TimeQueue */ array_real_5 *TimeQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::numE */ kcg_int numE,
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


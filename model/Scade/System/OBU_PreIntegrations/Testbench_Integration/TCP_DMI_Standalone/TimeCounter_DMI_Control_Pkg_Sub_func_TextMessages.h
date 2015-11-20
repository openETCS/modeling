/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::mm */ mm;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::hh */ hh;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter */
extern void TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_mm */kcg_real countCommand_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_hh */kcg_real countCommand_hh,
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */


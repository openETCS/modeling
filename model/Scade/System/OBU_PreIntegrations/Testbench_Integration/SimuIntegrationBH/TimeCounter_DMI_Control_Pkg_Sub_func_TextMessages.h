/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::hh_need_overflow */ hh_need_overflow;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L37 */ _L37;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L36 */ _L36;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L30 */ _L30;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L28 */ _L28;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L26 */ _L26;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L23 */ _L23;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L21 */ _L21;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L59 */ _L59;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L60 */ _L60;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L74 */ _L74;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L75 */ _L75;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L76 */ _L76;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L77 */ _L77;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L78 */ _L78;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L79 */ _L79;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L81 */ _L81;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L82 */ _L82;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L84 */ _L84;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::_L85 */ _L85;
} outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter */
extern void TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::isFull */ kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_mm */ kcg_real countCommand_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_hh */ kcg_real countCommand_hh,
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TimeCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


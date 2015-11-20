/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::flashigOut */ flashigOut;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::active */ active;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L10 */ _L10_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::Counter */ Counter_SM1_start;
  _4_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator */
extern void FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::OnOff */kcg_bool OnOff,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::Interval */kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */


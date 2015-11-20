/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_reset_act;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::stop::_L1 */ _L1_SM1_stop;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L26 */ _L26_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L25 */ _L25_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L24 */ _L24_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L3 */ _L3_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L9 */ _L9_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L23 */ _L23_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L22 */ _L22_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L21 */ _L21_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L20 */ _L20_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L19 */ _L19_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L18 */ _L18_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L17 */ _L17_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L15 */ _L15_SM1_start;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L13 */ _L13_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L12 */ _L12_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L2 */ _L2_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L4 */ _L4_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L7 */ _L7_SM1_start;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L6 */ _L6_SM1_start;
  _4_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_state_sel;
  _4_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_state_act;
  _6_SSM_TR_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_fired_strong;
  _6_SSM_TR_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ SM1_fired;
} outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator */
extern void FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::OnOff */ kcg_bool OnOff,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::Interval */ kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FlashingOperator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


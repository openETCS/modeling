/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */ txt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _1_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_state_nxt;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_reset_act;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert1::_L1 */ _L1_SM1_insert1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State2::_L1 */ _L1_SM1_State2;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert2::_L1 */ _L1_SM1_insert2;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State4::_L1 */ _L1_SM1_State4;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert3::_L1 */ _L1_SM1_insert3;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State6::_L1 */ _L1_SM1_State6;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert4::_L1 */ _L1_SM1_insert4;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State8::_L1 */ _L1_SM1_State8;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State0::_L1 */ _L1_SM1_State0;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insertAck2::_L1 */ _L1_SM1_insertAck2;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insertAck1::_L1 */ _L1_SM1_insertAck1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State5::_L1 */ _L1_SM1_State5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State3::_L1 */ _L1_SM1_State3;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert5::_L1 */ _L1_SM1_insert5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State7::_L1 */ _L1_SM1_State7;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert6::_L1 */ _L1_SM1_insert6;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State9::_L1 */ _L1_SM1_State9;
  _1_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_state_sel;
  _1_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_state_act;
  _3_SSM_TR_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_fired_strong;
  _3_SSM_TR_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_fired;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::clicked */ clicked;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::_L1 */ _L1;
} outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator */
extern void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::MousePressed */ kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TxtMsgSimulator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


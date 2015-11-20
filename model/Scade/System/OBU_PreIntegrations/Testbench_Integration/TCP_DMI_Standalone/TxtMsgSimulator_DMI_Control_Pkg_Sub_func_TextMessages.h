/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */ txt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _1_SSM_ST_SM1 /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator */
extern void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::MousePressed */kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */


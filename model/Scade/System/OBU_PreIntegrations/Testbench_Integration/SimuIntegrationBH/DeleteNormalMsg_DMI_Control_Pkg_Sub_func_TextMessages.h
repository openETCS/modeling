/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::NumE */ NumE;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_mm */ new_mm;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_hh */ new_hh;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::msg_is_Empty */ msg_is_Empty;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::MsgQueue */ MsgQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::local_num_ack */ rem_local_num_ack;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::localQueue */ rem_localQueue;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::LocalNum */ LocalNum;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L91 */ _L91;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L93 */ _L93;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L94 */ _L94;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L96 */ _L96;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L97 */ _L97;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L118 */ _L118;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L112 */ _L112;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L113 */ _L113;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L111 */ _L111;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L110 */ _L110;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L119 */ _L119;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L121 */ _L121;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L123 */ _L123;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L125 */ _L125;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L126 */ _L126;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L134 */ _L134;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L135 */ _L135;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L131 */ _L131;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L130 */ _L130;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L129 */ _L129;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L128 */ _L128;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L137 */ _L137;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L138 */ _L138;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L140 */ _L140;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::_L139 */ _L139;
} outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg */
extern void DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::localQueue */ array_169451 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::hh_array */ array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::mm_array */ array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::local_num_ack */ kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::is_empty */ kcg_bool is_empty,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::delete */ kcg_bool delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::num */ kcg_int num,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


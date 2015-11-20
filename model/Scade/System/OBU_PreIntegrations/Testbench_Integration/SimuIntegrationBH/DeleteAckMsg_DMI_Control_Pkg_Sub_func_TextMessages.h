/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::queue */ queue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::NumE */ NumE;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_mm */ new_mm;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_hh */ new_hh;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::ack_is_Empty */ ack_is_Empty;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_num_ack */ rem_local_num_ack;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::localQueue */ rem_localQueue;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::LocalNum */ LocalNum;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L6 */ _L6;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L19 */ _L19;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L25 */ _L25;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L27 */ _L27;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L32 */ _L32;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L33 */ _L33;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L70 */ _L70;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L76 */ _L76;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L80 */ _L80;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L84 */ _L84;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L85 */ _L85;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L91 */ _L91;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L93 */ _L93;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L94 */ _L94;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L96 */ _L96;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L97 */ _L97;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L101 */ _L101;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L103 */ _L103;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L102 */ _L102;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L104 */ _L104;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L105 */ _L105;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L106 */ _L106;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L107 */ _L107;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L108 */ _L108;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L110 */ _L110;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::_L109 */ _L109;
} outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg */
extern void DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::localQueue */ array_170229 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::Delete */ kcg_bool Delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::hh_array */ array_real_5 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::mm_array */ array_real_5 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_num_ack */ kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_ack_empty */ kcg_bool local_ack_empty,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


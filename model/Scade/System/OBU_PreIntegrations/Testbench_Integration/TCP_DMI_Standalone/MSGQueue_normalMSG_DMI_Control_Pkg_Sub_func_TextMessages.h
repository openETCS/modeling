/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */ isFull;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */ isEmpty;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumE */ NumE;
  array__31785 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::queue */ queue;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::mm_array */ mm_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::hh_array */ hh_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumImp */ NumImp;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumAuxi */ NumAuxi;
  array__31785 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */ impQueue;
  array__31785 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */ auxiQueue;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */ Local_mm_array_imp;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */ Local_hh_array_imp;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */ Local_hh_array_auxi;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */ Local_mm_array_auxi;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 3 */ Context_3;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ Context_2;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 25 */ Context_25;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 24 */ Context_24;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG */
extern void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isImportant */kcg_bool isImportant,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::num_last */kcg_int num_last,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */


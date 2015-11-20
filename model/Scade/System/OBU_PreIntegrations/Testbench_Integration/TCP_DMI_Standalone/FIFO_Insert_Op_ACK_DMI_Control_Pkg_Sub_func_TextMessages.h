/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__31788 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::queue */ queue;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::hh_array */ hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  array__31788 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::queue */ rem_queue;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[5];
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK */
extern void FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Messaggio */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_mm */kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_hh */kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::isFull */kcg_bool isFull,
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */


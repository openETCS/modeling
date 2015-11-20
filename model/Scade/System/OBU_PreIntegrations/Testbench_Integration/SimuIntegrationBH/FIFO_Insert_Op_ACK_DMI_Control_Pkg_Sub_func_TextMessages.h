/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::queue */ queue;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::hh_array */ hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1[5];
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[5];
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK */
extern void FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Pos */ kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Messaggio */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_mm */ kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::isFull */ kcg_bool isFull,
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_Insert_Op_ACK_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::queue */ queue;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::hh_array */ hh_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1[10];
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L5 */ _L5;
  array_170597 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L7 */ _L7;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L9 */ _L9;
  array_int_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L26 */ _L26;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L25 */ _L25;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L22 */ _L22;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L23 */ _L23;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L24 */ _L24;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L21 */ _L21;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L20 */ _L20;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L18 */ _L18;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L17 */ _L17;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L29 */ _L29;
  array_bool_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L31 */ _L31;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L34 */ _L34;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L36 */ _L36;
} outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal */
extern void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Pos */ kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Messaggio */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_mm */ kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::isFull */ kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


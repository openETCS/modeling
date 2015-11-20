/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::queue */ queue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::NumE */ NumE;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */ AckisFull;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */ AckisEmpty;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::hh_array */ hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::Local_mm */ Local_mm;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::Local_hh */ Local_hh;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _2_Context_1;
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock */ StatusQueue_IfBlock_clock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock */ OperationQueue_IfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock::then::_L1 */ _L1_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock::else */ else_clock_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock::else::else::_L1 */ _L14_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock::else::then::_L1 */ _L13_StatusQueue_IfBlock;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L32 */ _L32_OperationQueue_IfBlock;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L33 */ _L33_OperationQueue_IfBlock;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L34 */ _L34_OperationQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L31 */ _L31_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L29 */ _L29_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L30 */ _L30_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L27 */ _L27_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L26 */ _L26_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L23 */ _L23_OperationQueue_IfBlock;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L2 */ _L2_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L5 */ _L5_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L6 */ _L6_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::then::_L7 */ _L7_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::else::_L1 */ _L1_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::else::_L2 */ _L25_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::OperationQueue_IfBlock::else::_L3 */ _L3_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::NumElem */ NumElem;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::CountCommand */ CountCommand;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_hh */ countCommand_hh;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_mm */ countCommand_mm;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::ins */ ins;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L55 */ _L55;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L77 */ _L77;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L83 */ _L83;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L80 */ _L80;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L81 */ _L81;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L79 */ _L79;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L86 */ _L86;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L76 */ _L76;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L82 */ _L82;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L89 */ _L89;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L88 */ _L88;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L93 */ _L93;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L94 */ _L94;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L95 */ _L95;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L96 */ _L96;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L97 */ _L97;
} outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG */
extern void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::last_num */ kcg_int last_num,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */ isFull;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */ isEmpty;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumE */ NumE;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::queue */ queue;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::mm_array */ mm_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::hh_array */ hh_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumImp */ NumImp;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumAuxi */ NumAuxi;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */ impQueue;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */ auxiQueue;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm */ Local_mm;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh */ Local_hh;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */ Local_mm_array_imp;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */ Local_hh_array_imp;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */ Local_hh_array_auxi;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */ Local_mm_array_auxi;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _4_Context_1;
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ _3_Context_2;
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages /* 9 */ Context_9;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 24 */ Context_24;
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages /* 25 */ Context_25;
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _2_Context_1;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ Context_2;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 3 */ Context_3;
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1 */ IfBlock1_clock_OperationQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock */ OperationQueue_IfBlock_clock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock */ StatusQueue_IfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L187 */ _L187_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L185 */ _L185_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L183 */ _L183_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L182 */ _L182_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L178 */ _L178_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L181 */ _L181_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L177 */ _L177_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L176 */ _L176_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L175 */ _L175_OperationQueue_IfBlock;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L174 */ _L174_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L141 */ _L141_OperationQueue_IfBlock;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L142 */ _L142_OperationQueue_IfBlock;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L143 */ _L143_OperationQueue_IfBlock;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L144 */ _L144_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::_L52 */ _L52_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L1 */ _L1_OperationQueue_IfBlock_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L6 */ _L612_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L4 */ _L4_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L3 */ _L311_OperationQueue_IfBlock_IfBlock1;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L2 */ _L210_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L7 */ _L79_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L8 */ _L88_OperationQueue_IfBlock_IfBlock1;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L9 */ _L97_OperationQueue_IfBlock_IfBlock1;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L10 */ _L106_OperationQueue_IfBlock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L13 */ _L13_OperationQueue_IfBlock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L14 */ _L145_OperationQueue_IfBlock_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::else::_L17 */ _L17_OperationQueue_IfBlock_IfBlock1;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L7 */ _L7_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L6 */ _L6_OperationQueue_IfBlock_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L5 */ _L5_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L3 */ _L3_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L8 */ _L8_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L9 */ _L9_OperationQueue_IfBlock_IfBlock1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L2 */ _L2_OperationQueue_IfBlock_IfBlock1;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L10 */ _L10_OperationQueue_IfBlock_IfBlock1;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L11 */ _L11_OperationQueue_IfBlock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L14 */ _L14_OperationQueue_IfBlock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L15 */ _L15_OperationQueue_IfBlock_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1::then::_L19 */ _L19_OperationQueue_IfBlock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::else::_L1 */ _L1_OperationQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::else::_L2 */ _L2_OperationQueue_IfBlock;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::else::_L3 */ _L3_OperationQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock::then::_L1 */ _L1_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock::else */ else_clock_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock::else::else::_L1 */ _L114_StatusQueue_IfBlock;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock::else::then::_L1 */ _L113_StatusQueue_IfBlock;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumElem */ NumElem;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand */ CountCommand;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::ins */ ins;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::insertImpMsg */ insertImpMsg;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_imp */ CountCommand_imp;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_auxi */ CountCommand_auxi;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::insertAuxiMsg */ insertAuxiMsg;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_mm */ countCommand_mm;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_hh */ countCommand_hh;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L13 */ _L13;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L16 */ _L16;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L22 */ _L22;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L32 */ _L32;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L33 */ _L33;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L37 */ _L37;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L54 */ _L54;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L71 */ _L71;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L70 */ _L70;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L73 */ _L73;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L77 */ _L77;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L78 */ _L78;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L94 */ _L94;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L99 */ _L99;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L100 */ _L100;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L101 */ _L101;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L102 */ _L102;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L105 */ _L105;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L106 */ _L106;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L107 */ _L107;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L108 */ _L108;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L109 */ _L109;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L110 */ _L110;
} outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG */
extern void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isImportant */ kcg_bool isImportant,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::num_last */ kcg_int num_last,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


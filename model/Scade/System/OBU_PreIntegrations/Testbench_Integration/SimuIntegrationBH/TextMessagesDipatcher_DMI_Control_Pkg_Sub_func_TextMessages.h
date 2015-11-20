/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */ AckMsgQueue;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */ MsgQueue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */ NumE;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */ AckisEmpty;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */ isEmpty;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */ NumAckMsg;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */ hh_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */ mm_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */ ack_hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */ ack_mm_array;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::debugExpired */ debugExpired;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */ numAckMsg;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */ mm_local_array_ack;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */ hh_local_array_ack;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */ Local_AckMsgQueue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */ numNormalMsg;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */ Local_NormaliMsgQueue;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */ Local_ack_empty;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */ mm_local_array;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */ Local_isEmpty;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */ hh_local_array;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _3_Context_1;
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages /* 3 */ Context_3;
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _2_Context_1;
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _1_Context_1;
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ Context_2;
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else */ else_clock_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5 */ IfBlock5_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L52 */ _L52_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L49 */ _L49_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L51 */ _L51_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L50 */ _L50_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L48 */ _L48_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L28 */ _L28_IfBlock5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L13 */ _L13_IfBlock5;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::then::_L5 */ _L5_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L10 */ _L10_IfBlock5;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L5 */ _L57_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L6 */ _L6_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L7 */ _L7_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L8 */ _L8_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L9 */ _L9_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L3 */ _L3_IfBlock5;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L2 */ _L2_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L1 */ _L1_IfBlock5;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L12 */ _L12_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L11 */ _L11_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L23 */ _L23_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L24 */ _L24_IfBlock5;
  array_170229 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L28 */ _L286_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L33 */ _L335_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L32 */ _L32_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L31 */ _L31_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L30 */ _L30_IfBlock5;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L34 */ _L344_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L43 */ _L43_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L44 */ _L44_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L45 */ _L45_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::else::_L47 */ _L47_IfBlock5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L27 */ _L27_IfBlock5;
  array_169451 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L36 */ _L36_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L35 */ _L35_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L34 */ _L34_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L33 */ _L33_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L39 */ _L39_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L40 */ _L40_IfBlock5;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L41 */ _L41_IfBlock5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else::then::_L42 */ _L42_IfBlock5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AuxiMsg */ AuxiMsg;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsg */ AckMsg;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ImportantMsg */ ImportantMsg;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::timeExpired */ timeExpired;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L11 */ _L11;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L14 */ _L14;
} outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher */
extern void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::dmi_txt_msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::delete */ kcg_bool delete,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TextMessagesDipatcher_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


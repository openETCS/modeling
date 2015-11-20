/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__31788 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */ AckMsgQueue;
  array__31785 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */ MsgQueue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */ NumE;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */ AckisEmpty;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */ isEmpty;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */ NumAckMsg;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */ hh_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */ mm_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */ ack_hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */ ack_mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */ numAckMsg;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */ mm_local_array_ack;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */ hh_local_array_ack;
  array__31788 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */ Local_AckMsgQueue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */ numNormalMsg;
  array__31785 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */ Local_NormaliMsgQueue;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */ Local_ack_empty;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */ mm_local_array;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */ Local_isEmpty;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */ hh_local_array;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _1_Context_1;
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages /* 3 */ Context_3;
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher */
extern void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::dmi_txt_msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::delete */kcg_bool delete,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */


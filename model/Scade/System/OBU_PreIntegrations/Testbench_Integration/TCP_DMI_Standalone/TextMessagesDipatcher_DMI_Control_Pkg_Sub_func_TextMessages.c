/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h"

void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
  /* 3 */
  MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_3);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_1_Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher */
void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::dmi_txt_msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::delete */kcg_bool delete,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::IfBlock5::else */ kcg_bool else_clock_IfBlock5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */ array_real_10 last_hh_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */ kcg_bool last_Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */ array_real_10 last_mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */ kcg_bool last_Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */ array__31785 last_Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */ kcg_int last_numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */ array__31788 last_Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */ array_real_5 last_hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */ array_real_5 last_mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */ kcg_int last_numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */ array_real_5 last_ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */ array_real_5 last_ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */ array_real_10 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */ array_real_10 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */ kcg_int last_NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */ kcg_bool last_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */ kcg_int last_NumE;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */ array__31785 last_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */ array__31788 last_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AuxiMsg */ kcg_bool AuxiMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsg */ kcg_bool AckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ImportantMsg */ kcg_bool ImportantMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::_L14 */ kcg_bool _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_AckisEmpty = kcg_true;
    _L14 = kcg_true;
    last_Local_ack_empty = kcg_true;
    last_Local_isEmpty = kcg_true;
    kcg_copy_array_real_10(
      &last_hh_local_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_mm_local_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
    kcg_copy_array__31785(
      &last_Local_NormaliMsgQueue,
      (array__31785 *) &cMsgStructQueueMax_DMI_Control_Pkg);
    last_numNormalMsg = 0;
    kcg_copy_array__31788(
      &last_Local_AckMsgQueue,
      (array__31788 *) &cMsgStructQueue_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &last_hh_local_array_ack,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &last_mm_local_array_ack,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
    last_numAckMsg = 0;
    kcg_copy_array_real_5(
      &last_ack_mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &last_ack_hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_mm_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_hh_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
    last_NumAckMsg = 0;
    last_NumE = 0;
    kcg_copy_array__31785(
      &last_MsgQueue,
      (array__31785 *) &cMsgStructQueueMax_DMI_Control_Pkg);
    kcg_copy_array__31788(
      &last_AckMsgQueue,
      (array__31788 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_hh_local_array, &outC->hh_local_array);
    last_Local_isEmpty = outC->Local_isEmpty;
    kcg_copy_array_real_10(&last_mm_local_array, &outC->mm_local_array);
    last_Local_ack_empty = outC->Local_ack_empty;
    kcg_copy_array__31785(
      &last_Local_NormaliMsgQueue,
      &outC->Local_NormaliMsgQueue);
    last_numNormalMsg = outC->numNormalMsg;
    kcg_copy_array__31788(&last_Local_AckMsgQueue, &outC->Local_AckMsgQueue);
    kcg_copy_array_real_5(&last_hh_local_array_ack, &outC->hh_local_array_ack);
    kcg_copy_array_real_5(&last_mm_local_array_ack, &outC->mm_local_array_ack);
    last_numAckMsg = outC->numAckMsg;
    kcg_copy_array_real_5(&last_ack_mm_array, &outC->ack_mm_array);
    kcg_copy_array_real_5(&last_ack_hh_array, &outC->ack_hh_array);
    kcg_copy_array_real_10(&last_mm_array, &outC->mm_array);
    kcg_copy_array_real_10(&last_hh_array, &outC->hh_array);
    last_NumAckMsg = outC->NumAckMsg;
    _L14 = outC->isEmpty;
    last_AckisEmpty = outC->AckisEmpty;
    last_NumE = outC->NumE;
    kcg_copy_array__31785(&last_MsgQueue, &outC->MsgQueue);
    kcg_copy_array__31788(&last_AckMsgQueue, &outC->AckMsgQueue);
  }
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    kcg_false,
    _L14,
    SystemTime,
    kcg_true,
    1000,
    &outC->_1_Context_1);
  /* 1 */
  CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
    dmi_txt_msg,
    &AckMsg,
    &AuxiMsg,
    &ImportantMsg);
  if (AckMsg) {
    /* 3 */
    MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
      dmi_txt_msg,
      last_numAckMsg,
      &outC->Context_3);
    kcg_copy_array__31788(&outC->AckMsgQueue, &last_AckMsgQueue);
    kcg_copy_array__31785(&outC->MsgQueue, &last_MsgQueue);
    outC->NumE = last_NumE;
    outC->AckisEmpty = last_AckisEmpty;
    outC->isEmpty = _L14;
    outC->NumAckMsg = last_NumAckMsg;
    kcg_copy_array_real_10(&outC->hh_array, &last_hh_array);
    kcg_copy_array_real_10(&outC->mm_array, &last_mm_array);
    kcg_copy_array_real_5(&outC->ack_hh_array, &last_ack_hh_array);
    kcg_copy_array_real_5(&outC->ack_mm_array, &last_ack_mm_array);
    outC->numAckMsg = outC->Context_3.NumE;
    kcg_copy_array_real_5(&outC->mm_local_array_ack, &outC->Context_3.mm_array);
    kcg_copy_array_real_5(&outC->hh_local_array_ack, &outC->Context_3.hh_array);
    kcg_copy_array__31788(&outC->Local_AckMsgQueue, &outC->Context_3.queue);
    outC->numNormalMsg = last_numNormalMsg;
    kcg_copy_array__31785(
      &outC->Local_NormaliMsgQueue,
      &last_Local_NormaliMsgQueue);
    outC->Local_ack_empty = outC->Context_3.AckisEmpty;
    kcg_copy_array_real_10(&outC->mm_local_array, &last_mm_local_array);
    outC->Local_isEmpty = last_Local_isEmpty;
    kcg_copy_array_real_10(&outC->hh_local_array, &last_hh_local_array);
  }
  else {
    else_clock_IfBlock5 = AuxiMsg | ImportantMsg;
    if (else_clock_IfBlock5) {
      /* 1 */
      MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
        dmi_txt_msg,
        ImportantMsg,
        last_numNormalMsg,
        &outC->Context_1);
      kcg_copy_array__31788(&outC->AckMsgQueue, &last_AckMsgQueue);
      kcg_copy_array__31785(&outC->MsgQueue, &last_MsgQueue);
      outC->NumE = last_NumE;
      outC->AckisEmpty = last_AckisEmpty;
      outC->isEmpty = _L14;
      outC->NumAckMsg = last_NumAckMsg;
      kcg_copy_array_real_10(&outC->hh_array, &last_hh_array);
      kcg_copy_array_real_10(&outC->mm_array, &last_mm_array);
      kcg_copy_array_real_5(&outC->ack_hh_array, &last_ack_hh_array);
      kcg_copy_array_real_5(&outC->ack_mm_array, &last_ack_mm_array);
      outC->numAckMsg = last_numAckMsg;
      kcg_copy_array_real_5(
        &outC->mm_local_array_ack,
        &last_mm_local_array_ack);
      kcg_copy_array_real_5(
        &outC->hh_local_array_ack,
        &last_hh_local_array_ack);
      kcg_copy_array__31788(&outC->Local_AckMsgQueue, &last_Local_AckMsgQueue);
      outC->numNormalMsg = outC->Context_1.NumE;
      kcg_copy_array__31785(
        &outC->Local_NormaliMsgQueue,
        &outC->Context_1.queue);
      outC->Local_ack_empty = last_Local_ack_empty;
      kcg_copy_array_real_10(&outC->mm_local_array, &outC->Context_1.mm_array);
      outC->Local_isEmpty = outC->Context_1.isEmpty;
      kcg_copy_array_real_10(&outC->hh_local_array, &outC->Context_1.hh_array);
    }
    else {
      /* 1 */
      DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &last_Local_NormaliMsgQueue,
        &last_hh_local_array,
        &last_mm_local_array,
        last_numNormalMsg,
        last_Local_isEmpty,
        outC->_1_Context_1.expired,
        last_numNormalMsg,
        &outC->numNormalMsg,
        &outC->mm_local_array,
        &outC->hh_local_array,
        &outC->Local_isEmpty,
        &outC->Local_NormaliMsgQueue);
      /* 2 */
      DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &last_Local_AckMsgQueue,
        delete,
        &last_hh_local_array_ack,
        &last_mm_local_array_ack,
        last_numAckMsg,
        last_Local_ack_empty,
        &outC->Local_AckMsgQueue,
        &outC->numAckMsg,
        &outC->mm_local_array_ack,
        &outC->hh_local_array_ack,
        &outC->Local_ack_empty);
      kcg_copy_array__31788(&outC->AckMsgQueue, &outC->Local_AckMsgQueue);
      kcg_copy_array__31785(&outC->MsgQueue, &outC->Local_NormaliMsgQueue);
      outC->NumE = outC->numNormalMsg;
      outC->AckisEmpty = outC->Local_ack_empty;
      outC->isEmpty = outC->Local_isEmpty;
      outC->NumAckMsg = outC->numAckMsg;
      kcg_copy_array_real_10(&outC->hh_array, &outC->hh_local_array);
      kcg_copy_array_real_10(&outC->mm_array, &outC->mm_local_array);
      kcg_copy_array_real_5(&outC->ack_hh_array, &outC->hh_local_array_ack);
      kcg_copy_array_real_5(&outC->ack_mm_array, &outC->mm_local_array_ack);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */


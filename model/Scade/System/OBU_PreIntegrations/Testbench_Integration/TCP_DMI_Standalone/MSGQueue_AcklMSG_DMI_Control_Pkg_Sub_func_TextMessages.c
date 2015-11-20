/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
  /* 1 */
  TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  /* 1 */
  ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG */
void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::last_num */kcg_int last_num,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_int tmp2;
  kcg_real tmp1;
  kcg_real tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock::else */ kcg_bool else_clock_StatusQueue_IfBlock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::StatusQueue_IfBlock */ kcg_bool StatusQueue_IfBlock_clock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::ins */ kcg_bool ins;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::_L55 */ kcg_bool _L55;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L55 = kcg_false;
  }
  else {
    _L55 = outC->AckisFull;
  }
  if ((*msg).valid) {
    ins = kcg_true;
  }
  else {
    ins = kcg_false;
  }
  if (ins) {
    tmp2 = 1;
    tmp1 = 10.0;
    tmp = 1.0;
  }
  else {
    tmp2 = 0;
    tmp1 = 0.0;
    tmp = 0.0;
  }
  /* 1 */
  ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    ins,
    _L55,
    tmp2,
    last_num,
    &outC->_2_Context_1);
  outC->NumE = outC->_2_Context_1.NumElem;
  /* 1 */
  TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    ins,
    _L55,
    tmp1,
    tmp,
    &outC->_1_Context_1);
  StatusQueue_IfBlock_clock = outC->NumE >= cDIM_MSGQueue_DMI_Control_Pkg;
  if (StatusQueue_IfBlock_clock) {
    outC->AckisEmpty = kcg_false;
    outC->AckisFull = kcg_true;
  }
  else {
    else_clock_StatusQueue_IfBlock = outC->NumE <= 0;
    if (else_clock_StatusQueue_IfBlock) {
      outC->AckisEmpty = kcg_true;
      outC->AckisFull = _L55;
    }
    else {
      outC->AckisEmpty = kcg_false;
      outC->AckisFull = kcg_false;
    }
  }
  if (ins) {
    /* 1 */
    FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->NumE - 1,
      msg,
      outC->_1_Context_1.mm,
      outC->_1_Context_1.hh,
      _L55,
      &outC->Context_1);
    kcg_copy_array__31788(&outC->queue, &outC->Context_1.queue);
    kcg_copy_array_real_5(&outC->hh_array, &outC->Context_1.hh_array);
    kcg_copy_array_real_5(&outC->mm_array, &outC->Context_1.mm_array);
  }
  else {
    kcg_copy_array__31788(
      &outC->queue,
      (array__31788 *) &cListMsgStructure_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &outC->hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &outC->mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 10; i++) {
    /* 1 */
    InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal */
void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Messaggio */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_mm */kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_hh */kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::isFull */kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  array__31785 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::_L22 */ kcg_int _L22;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_array__31785(
      &outC->queue,
      (array__31785 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array__31785(&outC->queue, &outC->rem_queue);
  }
  for (i = 0; i < 10; i++) {
    kcg_copy_array__31785(&tmp, &outC->queue);
    /* 1 */
    InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      Pos,
      Messaggio,
      isFull,
      &outC->queue);
  }
  for (i = 0; i < 10; i++) {
    /* 1 */
    InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      Pos,
      new_hh,
      new_mm,
      &outC->Context_1[i]);
    outC->hh_array[i] = outC->Context_1[i].hh;
    outC->mm_array[i] = outC->Context_1[i].mm;
    _L22 = i + 1;
    if (!outC->Context_1[i].condition) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 10; i++) {
    outC->hh_array[i] = - 1.0;
    outC->mm_array[i] = - 1.0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array__31785(&outC->rem_queue, &outC->queue);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */


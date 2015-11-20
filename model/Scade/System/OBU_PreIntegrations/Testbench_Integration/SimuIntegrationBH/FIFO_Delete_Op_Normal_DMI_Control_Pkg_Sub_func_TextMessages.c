/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 10; i1++) {
    outC->Queue[i1].present = kcg_true;
    outC->Queue[i1].dmi_msg.valid = kcg_true;
    outC->Queue[i1].dmi_msg.system_clock = 0;
    outC->Queue[i1].dmi_msg.textMessage_ID = 0;
    outC->Queue[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->Queue[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->Queue[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->Queue[i1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->Queue[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i2 = 0; i2 < 10; i2++) {
    /* 1 */
    DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i2]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 10; i++) {
    /* 1 */
    DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal */
void FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::DeletePos */ kcg_int DeletePos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::queueIn */ array_169451 *queueIn,
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i1;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L1 */
  static array_169451 _L1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L2 */
  static kcg_int _L2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L3 */
  static array_int_10 _L3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L5 */
  static array_169451 _L5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L6 */
  static array_169451 _L6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L7 */
  static array_169451 _L7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L8 */
  static array_168789 _L8;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal::_L9 */
  static array_168496 _L9;
  
  kcg_copy_array_169451(&_L5, queueIn);
  kcg_copy_array_169451(&_L7, queueIn);
  kcg_copy_array_168789(&_L8, (array_168789 *) &_L7[1]);
  kcg_copy_MsgStructure(
    &_L9[0],
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy_array_168789(&_L6[0], &_L8);
  kcg_copy_array_168496(&_L6[9], &_L9);
  _L2 = DeletePos;
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    _L3[i1] = _L2;
  }
  /* 1 */ for (i = 0; i < 10; i++) {
    /* 1 */
    DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &_L5[i],
      &_L6[i],
      _L3[i],
      &outC->Context_1[i]);
    kcg_copy_MsgStructure(&_L1[i], &outC->Context_1[i].QueueElemOut);
  }
  kcg_copy_array_169451(&outC->Queue, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */


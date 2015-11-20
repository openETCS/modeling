/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* 1 */
  FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Queue */array__31788 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_hh_local */array_real_5 *array_hh_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_mm_local */array_real_5 *array_mm_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::numAck */kcg_int numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_bool tmp3;
  kcg_bool tmp2;
  array_real_5 tmp1;
  array_real_5 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IfBlock1::then::_L21 */ kcg_bool _L21_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::FixText */ kcg_bool FixText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::PlainText */ kcg_bool PlainText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::num_mm */ kcg_int num_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::_L37 */ kcg_real _L37;
  
  /* 1 */
  CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
    Queue,
    &FixText,
    &PlainText);
  if (FixText) {
    _L21_IfBlock1 = kcg_false;
    kcg_copy_array_char_30_5(
      &outC->ArrayPlainText,
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    for (i = 0; i < 27; i++) {
      tmp3 = _L21_IfBlock1;
      /* 1 */
      Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
        i,
        tmp3,
        ArrayEnum_Q_text_DMI_Control_Pkg[i],
        (*Queue)[0].dmi_msg.q_text,
        &tmp2,
        &_L21_IfBlock1);
      (&outC->IndexFixedMsg[0])[0] = i + 1;
      if (!tmp2) {
        break;
      }
    }
    (&outC->IndexFixedMsg[1])[0] = 0;
    (&outC->IndexFixedMsg[1])[1] = 0;
    (&outC->IndexFixedMsg[1])[2] = 0;
    (&outC->IndexFixedMsg[1])[3] = 0;
  }
  else {
    outC->IndexFixedMsg[0] = 0;
    outC->IndexFixedMsg[1] = 0;
    outC->IndexFixedMsg[2] = 0;
    outC->IndexFixedMsg[3] = 0;
    outC->IndexFixedMsg[4] = 0;
    if (PlainText) {
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[0],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[0]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[1],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[30]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[2],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[60]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[3],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[90]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[4],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[120]);
    }
    else {
      kcg_copy_array_char_30_5(
        &outC->ArrayPlainText,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    }
  }
  /* 1 */
  FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
    kcg_true,
    SystemTime,
    cIntervalFlashingTimeMsg_DMI_Control_Pkg,
    &outC->Context_1);
  outC->FlashingBorderMsg = outC->Context_1.flashigOut;
  num_mm = /* 2 */ Length_DMI_Control_Pkg_Sub_func_TextMessages(array_hh_local);
  _L37 = - 1.0;
  outC->Array_mm[3] = _L37;
  outC->Array_mm[4] = outC->Array_mm[3];
  outC->Array_mm[1] = _L37;
  outC->Array_mm[2] = outC->Array_mm[1];
  outC->Array_hh[3] = _L37;
  outC->Array_hh[4] = outC->Array_hh[3];
  outC->Array_hh[1] = _L37;
  outC->Array_hh[2] = outC->Array_hh[1];
  kcg_copy_array_real_5(
    &tmp,
    (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp1, &tmp);
    /* 2 */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp1,
      array_hh_local,
      numAck,
      num_mm,
      &tmp);
  }
  outC->Array_hh[0] = tmp[0];
  num_mm = /* 1 */ Length_DMI_Control_Pkg_Sub_func_TextMessages(array_mm_local);
  kcg_copy_array_real_5(
    &tmp1,
    (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp, &tmp1);
    /* 1 */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      array_mm_local,
      numAck,
      num_mm,
      &tmp1);
  }
  outC->Array_mm[0] = tmp1[0];
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void InsertStructMSGFIFO_iterator_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->OutputArray[i1].present = kcg_true;
    outC->OutputArray[i1].dmi_msg.valid = kcg_true;
    outC->OutputArray[i1].dmi_msg.system_clock = 0;
    outC->OutputArray[i1].dmi_msg.textMessage_ID = 0;
    outC->OutputArray[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutputArray[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->OutputArray[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->OutputArray[i1].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->OutputArray[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void InsertStructMSGFIFO_iterator_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack */
void InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::acc */ array_170229 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::Position */ kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::newMsg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::isFull */ kcg_bool isFull,
  outC_InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::OutputArray */
  static array_170229 last_OutputArray;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L1 */
  static kcg_int _L1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L2 */
  static kcg_int _L2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L4 */
  static kcg_bool _L4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L6 */
  static array_170229 _L6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L14 */
  static array_170229 _L14;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L13 */
  static kcg_bool _L13;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L12 */
  static MsgStructure _L12;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L3 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L19 */
  static array_170229 _L19;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L20 */
  static kcg_int _L20;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L26 */
  static array_170229 _L26;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L22 */
  static array_170229 _L22;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L33 */
  static kcg_bool _L33;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L32 */
  static kcg_int _L32;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L31 */
  static kcg_bool _L31;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L30 */
  static kcg_int _L30;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L29 */
  static kcg_bool _L29;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L35 */
  static array_170229 _L35;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L38 */
  static kcg_int _L38;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L39 */
  static MsgStructure _L39;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L40 */
  static array_170229 _L40;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L41 */
  static MsgStructure _L41;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L42 */
  static kcg_int _L42;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L43 */
  static kcg_int _L43;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L44 */
  static kcg_int _L44;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L63 */
  static array_170229 _L63;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L72 */
  static kcg_int _L72;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L70 */
  static kcg_int _L70;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L69 */
  static kcg_bool _L69;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L74 */
  static array_170229 _L74;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L80 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L80;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L79 */
  static kcg_bool _L79;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L78 */
  static array_170229 _L78;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L77 */
  static MsgStructure _L77;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L76 */
  static kcg_int _L76;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L75 */
  static array_170229 _L75;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L81 */
  static kcg_bool _L81;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L82 */
  static kcg_bool _L82;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L83 */
  static kcg_bool _L83;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L84 */
  static kcg_bool _L84;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_ack::_L85 */
  static kcg_bool _L85;
  
  _L1 = index;
  _L2 = Position;
  /* last_init_ck_OutputArray */ if (outC->init) {
    kcg_copy_array_170229(
      &last_OutputArray,
      (array_170229 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_OutputArray, &outC->OutputArray);
  }
  _L4 = _L1 == _L2;
  _L82 = isFull;
  _L83 = !_L82;
  _L81 = _L4 & _L83;
  kcg_copy_array_170229(&_L14, acc);
  _L13 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L3, newMsg);
  _L12.present = _L13;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L12.dmi_msg, &_L3);
  _L20 = index;
  kcg_copy_array_170229(&_L19, &_L14);
  if ((0 <= _L20) & (_L20 < 5)) {
    kcg_copy_MsgStructure(&_L19[_L20], &_L12);
  }
  _L30 = index;
  _L32 = Position;
  _L29 = _L30 < _L32;
  _L33 = isFull;
  _L31 = _L29 & _L33;
  kcg_copy_array_170229(&_L22, acc);
  kcg_copy_array_170229(&_L40, acc);
  kcg_copy_MsgStructure(&_L41, (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  _L42 = index;
  _L44 = 1;
  _L43 = _L42 + _L44;
  if ((0 <= _L43) & (_L43 < 5)) {
    kcg_copy_MsgStructure(&_L39, &_L40[_L43]);
  }
  else {
    kcg_copy_MsgStructure(&_L39, &_L41);
  }
  _L38 = index;
  kcg_copy_array_170229(&_L26, &_L22);
  if ((0 <= _L38) & (_L38 < 5)) {
    kcg_copy_MsgStructure(&_L26[_L38], &_L39);
  }
  _L84 = isFull;
  _L70 = index;
  _L72 = Position;
  _L69 = _L70 == _L72;
  _L85 = _L84 & _L69;
  kcg_copy_array_170229(&_L75, acc);
  _L79 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L80, newMsg);
  _L77.present = _L79;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L77.dmi_msg, &_L80);
  _L76 = index;
  kcg_copy_array_170229(&_L78, &_L75);
  if ((0 <= _L76) & (_L76 < 5)) {
    kcg_copy_MsgStructure(&_L78[_L76], &_L77);
  }
  kcg_copy_array_170229(&_L63, acc);
  /* 3 */ if (_L85) {
    kcg_copy_array_170229(&_L74, &_L78);
  }
  else {
    kcg_copy_array_170229(&_L74, &_L63);
  }
  /* 2 */ if (_L31) {
    kcg_copy_array_170229(&_L35, &_L26);
  }
  else {
    kcg_copy_array_170229(&_L35, &_L74);
  }
  /* 1 */ if (_L81) {
    kcg_copy_array_170229(&_L6, &_L19);
  }
  else {
    kcg_copy_array_170229(&_L6, &_L35);
  }
  kcg_copy_array_170229(&outC->OutputArray, &_L6);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */


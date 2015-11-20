/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_write */
void TransitionBuffer_read_write_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  static kcg_int i;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::index */
  static kcg_int index;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::currentStacksize */
  static kcg_int currentStacksize;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L19 */
  static ReceivedMessage_T_Common_Types_Pkg _L19;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L18 */
  static ReceivedMessage_T_Common_Types_Pkg _L18;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L17 */
  static ReceivedMessage_T_Common_Types_Pkg _L17;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L16 */
  static kcg_int _L16;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L15 */
  static kcg_int _L15;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L14 */
  static TransitionBuffer_T_InformationFilter_Pkg _L14;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L13 */
  static kcg_int _L13;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L12 */
  static array_170652 _L12;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L10 */
  static kcg_int _L10;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L9 */
  static ReceivedMessage_T_Common_Types_Pkg _L9;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L8 */
  static kcg_int _L8;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L6 */
  static kcg_int _L6;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L5 */
  static TransitionBuffer_T_InformationFilter_Pkg _L5;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L3 */
  static ReceivedMessage_T_Common_Types_Pkg _L3;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L2 */
  static array_170437 _L2;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L20 */
  static TransitionBuffer_T_InformationFilter_Pkg _L20;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L21 */
  static kcg_bool _L21;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L22 */
  static TransitionBuffer_T_InformationFilter_Pkg _L22;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L23 */
  static kcg_int _L23;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L24 */
  static kcg_int _L24;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L25 */
  static kcg_int _L25;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L26 */
  static kcg_int _L26;
  
  _L21 = Reset;
  _L26 = 0;
  _L15 = Stacksize_old;
  /* 5 */ if (_L21) {
    _L25 = _L26;
  }
  else {
    _L25 = _L15;
  }
  currentStacksize = _L25;
  _L24 = currentStacksize;
  _L8 = 1;
  _L7 = _L24 - _L8;
  _L6 = 0;
  _L4 = _L7 < _L6;
  /* 1 */ if (_L4) {
    _L10 = _L6;
  }
  else {
    _L10 = _L7;
  }
  index = _L10;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &_L22,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L5, Buffer_In);
  /* 4 */ if (_L21) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, &_L22);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, &_L5);
  }
  kcg_copy_array_170437(&_L2, (array_170437 *) &_L20[0]);
  _L13 = 0;
  _L23 = currentStacksize;
  _L11 = _L13 == _L23;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L17, Message_In);
  _L16 = index;
  if ((0 <= _L16) & (_L16 < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L19, &_L20[_L16]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L19,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  /* 3 */ if (_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L3, &_L17);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L3, &_L19);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L18,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* 2 */ if (_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L9, &_L18);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L9, &_L17);
  }
  *Stacksize_new = _L24;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, &_L3);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L12[i], &_L9);
  }
  kcg_copy_array_170652(&_L14[0], &_L12);
  kcg_copy_array_170437(&_L14[1], &_L2);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(Buffer_Out, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_write_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


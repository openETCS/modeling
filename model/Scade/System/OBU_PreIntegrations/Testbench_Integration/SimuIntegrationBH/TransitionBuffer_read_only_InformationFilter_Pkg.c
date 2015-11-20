/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_only_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_only */
void TransitionBuffer_read_only_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::index */
  static kcg_int index;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L13 */
  static ReceivedMessage_T_Common_Types_Pkg _L13;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L12 */
  static kcg_int _L12;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L9 */
  static kcg_int _L9;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L8 */
  static kcg_int _L8;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L7 */
  static ReceivedMessage_T_Common_Types_Pkg _L7;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L6 */
  static kcg_int _L6;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L5 */
  static kcg_int _L5;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L4 */
  static kcg_int _L4;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L3 */
  static ReceivedMessage_T_Common_Types_Pkg _L3;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L2 */
  static kcg_int _L2;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L1 */
  static TransitionBuffer_T_InformationFilter_Pkg _L1;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L14 */
  static kcg_int _L14;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L15 */
  static kcg_int _L15;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L16 */
  static kcg_bool _L16;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L17 */
  static TransitionBuffer_T_InformationFilter_Pkg _L17;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L19 */
  static TransitionBuffer_T_InformationFilter_Pkg _L19;
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L20 */
  static TransitionBuffer_T_InformationFilter_Pkg _L20;
  
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L1, Buffer_In);
  _L16 = Reset;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &_L17,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  /* 4 */ if (_L16) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, &_L17);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, &_L1);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L13,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  _L15 = 0;
  _L2 = Stacksize_old;
  /* 2 */ if (_L16) {
    _L14 = _L15;
  }
  else {
    _L14 = _L2;
  }
  _L6 = 1;
  _L8 = _L14 - _L6;
  _L9 = 0;
  _L11 = _L8 < _L9;
  /* 1 */ if (_L11) {
    _L4 = _L9;
  }
  else {
    _L4 = _L8;
  }
  index = _L4;
  _L12 = index;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L19, &_L20);
  if ((0 <= _L12) & (_L12 < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L19[_L12], &_L13);
  }
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(Buffer_Out, &_L19);
  _L5 = index;
  if ((0 <= _L5) & (_L5 < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L3, &_L20[_L5]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L3,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, &_L3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L7, Message_In);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L7);
  *Stacksize_new = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_only_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


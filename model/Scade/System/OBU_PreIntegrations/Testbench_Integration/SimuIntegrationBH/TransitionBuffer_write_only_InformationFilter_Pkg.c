/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_write_only_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_write_only */
void TransitionBuffer_write_only_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  static kcg_int i;
  static kcg_bool noname;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L12 */
  static ReceivedMessage_T_Common_Types_Pkg _L12;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L10 */
  static kcg_int _L10;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L9 */
  static TransitionBuffer_T_InformationFilter_Pkg _L9;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L8 */
  static TransitionBuffer_T_InformationFilter_Pkg _L8;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L7 */
  static array_170437 _L7;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L6 */
  static ReceivedMessage_T_Common_Types_Pkg _L6;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L5 */
  static kcg_int _L5;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L4 */
  static kcg_int _L4;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L3 */
  static array_170652 _L3;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L2 */
  static kcg_int _L2;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L1 */
  static kcg_int _L1;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L13 */
  static kcg_bool _L13;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L14 */
  static TransitionBuffer_T_InformationFilter_Pkg _L14;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L15 */
  static TransitionBuffer_T_InformationFilter_Pkg _L15;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L16 */
  static kcg_int _L16;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L17 */
  static kcg_int _L17;
  
  _L1 = 1;
  _L13 = Reset;
  _L17 = 0;
  _L5 = Stacksize_old;
  /* 3 */ if (_L13) {
    _L16 = _L17;
  }
  else {
    _L16 = _L5;
  }
  _L2 = _L16 + _L1;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L12, Message_In);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L3[i], &_L12);
  }
  _L4 = DIM_TransitionBuffer_InformationFilter_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L6,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &_L15,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L9, Buffer_In);
  /* 2 */ if (_L13) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L14, &_L15);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L14, &_L9);
  }
  kcg_copy_array_170437(&_L7, (array_170437 *) &_L14[0]);
  kcg_copy_array_170652(&_L8[0], &_L3);
  kcg_copy_array_170437(&_L8[1], &_L7);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, &_L6);
  _L11 = _L2 > _L4;
  noname = _L11;
  /* 1 */ if (_L11) {
    _L10 = _L4;
  }
  else {
    _L10 = _L2;
  }
  *Stacksize_new = _L10;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(Buffer_Out, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_write_only_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


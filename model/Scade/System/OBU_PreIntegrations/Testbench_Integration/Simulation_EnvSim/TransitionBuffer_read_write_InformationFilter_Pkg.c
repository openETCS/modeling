/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_write */
void TransitionBuffer_read_write_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_In */TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_old */kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_In */ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Reset */kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_Out */TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_new */kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_out */ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  static kcg_int tmp;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L20 */
  static TransitionBuffer_T_InformationFilter_Pkg _L20;
  
  if (Reset) {
    *Stacksize_new = 0;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &_L20,
      (TransitionBuffer_T_InformationFilter_Pkg *)
        &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  }
  else {
    *Stacksize_new = Stacksize_old;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, Buffer_In);
  }
  _L11 = 0 == *Stacksize_new;
  if (_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &(&(*Buffer_Out)[0])[0],
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &(&(*Buffer_Out)[0])[0],
      Message_In);
  }
  kcg_copy_array__158672(&(*Buffer_Out)[1], (array__158672 *) &_L20[0]);
  _L7 = *Stacksize_new - 1;
  if (_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, Message_In);
  }
  else {
    if (_L7 < 0) {
      tmp = 0;
    }
    else {
      tmp = _L7;
    }
    if ((0 <= tmp) & (tmp < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, &_L20[tmp]);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        Message_out,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_read_write_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


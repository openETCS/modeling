/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_write_only_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_write_only */
void TransitionBuffer_write_only_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_In */TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_old */kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_In */ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Reset */kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_Out */TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_new */kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_out */ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  static array__158672 tmp;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L2 */
  static kcg_int _L2;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    Message_out,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (Reset) {
    _L2 = 0 + 1;
    kcg_copy_array__158672(
      &tmp,
      (array__158672 *) &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg[0]);
  }
  else {
    _L2 = Stacksize_old + 1;
    kcg_copy_array__158672(&tmp, (array__158672 *) &(*Buffer_In)[0]);
  }
  if (_L2 > DIM_TransitionBuffer_InformationFilter_Pkg) {
    *Stacksize_new = DIM_TransitionBuffer_InformationFilter_Pkg;
  }
  else {
    *Stacksize_new = _L2;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &(&(*Buffer_Out)[0])[0],
    Message_In);
  kcg_copy_array__158672(&(*Buffer_Out)[1], &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_write_only_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


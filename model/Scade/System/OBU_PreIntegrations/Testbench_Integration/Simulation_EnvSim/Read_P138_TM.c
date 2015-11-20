/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P138_TM.h"

/* TM::Read_P138 */
void Read_P138_TM(
  /* TM::Read_P138::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P138::received */kcg_bool *received,
  /* TM::Read_P138::P138_OBU_out */P138_OBU_T_TM *P138_OBU_out)
{
  /* TM::Read_P138::_L5 */
  static array_int_500 _L5;
  /* TM::Read_P138::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    138032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P138_compr_onboard_TM_conversions(&_L5, &_L30, P138_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P138_TM.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


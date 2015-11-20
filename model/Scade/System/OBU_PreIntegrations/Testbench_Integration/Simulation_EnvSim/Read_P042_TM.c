/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P042_TM.h"

/* TM::Read_P042 */
void Read_P042_TM(
  /* TM::Read_P042::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P042::received */kcg_bool *received,
  /* TM::Read_P042::P042_OBU_out */P42_SessionManagement_T_Packet_Types_Pkg *P042_OBU_out)
{
  /* TM::Read_P042::_L5 */
  static array_int_500 _L5;
  /* TM::Read_P042::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    42032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 2 */ C_P042_compr_onboard_TM_conversions(&_L5, &_L30, P042_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P042_TM.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P003V1_TM_baseline2.h"

/* TM_baseline2::Read_P003V1 */
void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P003V1::received */kcg_bool *received,
  /* TM_baseline2::Read_P003V1::P003V1_OBU_out */P003V1_OBU_T_TM_baseline2 *P003V1_OBU_out)
{
  /* TM_baseline2::Read_P003V1::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM_baseline2::Read_P003V1::_L5 */
  static array_int_500 _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    3016000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */
  C_P003V1_compr_onboard_TM_conversions_baseline2(&_L5, &_L30, P003V1_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P003V1_TM_baseline2.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */


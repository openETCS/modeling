/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P027V1_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P027V1 */
void Send_P027V1_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P027V1::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P027V1::P027 */P027V1_trackside_int_T_TM_baseline2 *P027,
  /* MessageLibBaseline2::Send_P027V1::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  static kcg_bool tmp;
  
  if ((*P027).valid) {
    /* 1 */
    Write_P027V1_TM_trackside_baseline2(P027, B_data_in, &tmp, B_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P027V1_MessageLibBaseline2.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */


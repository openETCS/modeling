/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M003_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M003_JRU */
void Send_M003_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M003_JRU::M003 */M_003_int_T_TM_radio_messages *M003,
  /* MessageLibBaseline2::Send_M003_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M003_int__to_header_TM_RBC_conversions(M003, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M003_JRU_MessageLibBaseline2.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */


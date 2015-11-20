/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_LRBG_TM.h"

/* TM::Decode_NID_LRBG */
void Decode_NID_LRBG_TM(
  /* TM::Decode_NID_LRBG::NID_LRBG_in */NID_LRBG NID_LRBG_in,
  /* TM::Decode_NID_LRBG::NID_C_out */NID_C *NID_C_out,
  /* TM::Decode_NID_LRBG::NID_BG_out */NID_BG *NID_BG_out)
{
  *NID_BG_out = NID_LRBG_in % 100000;
  *NID_C_out = NID_LRBG_in / 100000;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_NID_LRBG_TM.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


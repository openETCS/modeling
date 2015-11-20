/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P138_to_legacy_t */
void C_P138_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P138_to_legacy_t::P138_in */P138_OBU_T_TM *P138_in,
  /* TM_conversions::C_P138_to_legacy_t::P138_legacy_out */P138_ReversingAreaInformation_T_Packet_Types_Pkg *P138_legacy_out)
{
  (*P138_legacy_out).valid = (*P138_in).valid;
  (*P138_legacy_out).q_dir = (*P138_in).q_dir;
  (*P138_legacy_out).q_scale = (*P138_in).q_scale;
  (*P138_legacy_out).d_startreverse = (*P138_in).d_startreverse;
  (*P138_legacy_out).l_reversearea = (*P138_in).l_reversearea;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P138_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


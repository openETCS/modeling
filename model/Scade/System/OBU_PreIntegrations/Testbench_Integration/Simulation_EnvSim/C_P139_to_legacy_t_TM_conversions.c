/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P139_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P139_to_legacy_t */
void C_P139_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P139_to_legacy_t::P139_in */P139_OBU_T_TM *P139_in,
  /* TM_conversions::C_P139_to_legacy_t::P139_legacy_out */P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P139_legacy_out)
{
  (*P139_legacy_out).valid = (*P139_in).valid;
  (*P139_legacy_out).q_dir = (*P139_in).q_dir;
  (*P139_legacy_out).q_scale = (*P139_in).q_scale;
  (*P139_legacy_out).d_reverse = (*P139_in).d_reverse;
  (*P139_legacy_out).v_reverse = (*P139_in).v_reverse;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P139_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


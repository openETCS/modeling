/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P021_to_legacy_loop */
void C_P021_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P021_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P021_to_legacy_loop::P021_in */P021_OBU_T_TM *P021_in,
  /* TM_conversions::C_P021_to_legacy_loop::P021_section_in */P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  /* TM_conversions::C_P021_to_legacy_loop::P015_legacy_out */P21_GradientProfile_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_conversions::C_P021_to_legacy_loop::_L21 */
  static P021_section_enum_T_TM _L21;
  
  (*P015_legacy_out).q_dir = (*P021_in).q_dir;
  (*P015_legacy_out).q_scale = (*P021_in).q_scale;
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L21, &(*P021_section_in)[i]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L21,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  (*P015_legacy_out).valid = _L21.valid;
  (*P015_legacy_out).d_gradient = _L21.d_gradient;
  (*P015_legacy_out).q_gdir = _L21.q_gdir;
  (*P015_legacy_out).g_a = _L21.g_a;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


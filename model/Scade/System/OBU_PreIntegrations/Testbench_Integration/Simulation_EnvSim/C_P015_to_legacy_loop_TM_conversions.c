/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_loop */
void C_P015_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P015_to_legacy_loop::P015_in */P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_legacy_out */P15_Level23MovementAuthority_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_conversions::C_P015_to_legacy_loop::_L21 */
  static P015_section_enum_T_TM _L21;
  
  (*P015_legacy_out).q_dir = (*P015_in).q_dir;
  (*P015_legacy_out).q_scale = (*P015_in).q_scale;
  (*P015_legacy_out).v_loa = (*P015_in).v_loa;
  (*P015_legacy_out).t_loa = (*P015_in).t_loa;
  (*P015_legacy_out).l_endsection = (*P015_in).l_endsection;
  (*P015_legacy_out).q_sectiontimer = (*P015_in).q_sectiontimer;
  (*P015_legacy_out).t_sectiontimer = (*P015_in).t_sectiontimer;
  (*P015_legacy_out).d_sectiontimerstoploc = (*P015_in).d_sectiontimerstoploc;
  (*P015_legacy_out).q_endtimer = (*P015_in).q_endtimer;
  (*P015_legacy_out).t_endtimer = (*P015_in).t_endtimer;
  (*P015_legacy_out).d_endtimerstartloc = (*P015_in).d_endtimerstartloc;
  (*P015_legacy_out).q_dangerpoint = (*P015_in).q_dangerpoint;
  (*P015_legacy_out).d_dp = (*P015_in).d_dp;
  (*P015_legacy_out).v_releasedp = (*P015_in).v_releasedp;
  (*P015_legacy_out).q_overlap = (*P015_in).q_overlap;
  (*P015_legacy_out).d_startol = (*P015_in).d_startol;
  (*P015_legacy_out).t_ol = (*P015_in).t_ol;
  (*P015_legacy_out).d_ol = (*P015_in).d_ol;
  (*P015_legacy_out).v_releaseol = (*P015_in).v_releaseol;
  if ((0 <= i) & (i < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L21, &(*P015_section_in)[i]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &_L21,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  (*P015_legacy_out).l_section = _L21.l_section;
  (*P015_legacy_out).q_sectiontimer_k = _L21.q_sectiontimer;
  (*P015_legacy_out).t_sectiontimer_k = _L21.t_sectiontimer;
  (*P015_legacy_out).d_sectiontimerstoploc_k = _L21.d_sectiontimerstoploc;
  if (i > 0) {
    (*P015_legacy_out).valid = _L21.valid;
  }
  else {
    (*P015_legacy_out).valid = (*P015_in).valid;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


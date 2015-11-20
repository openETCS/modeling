/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P041_to_legacy_loop */
void C_P041_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P041_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P041_to_legacy_loop::q_dir_in */Q_DIR q_dir_in,
  /* TM_conversions::C_P041_to_legacy_loop::q_scale_in */Q_SCALE q_scale_in,
  /* TM_conversions::C_P041_to_legacy_loop::d_leveltr_in */D_LEVELTR d_leveltr_in,
  /* TM_conversions::C_P041_to_legacy_loop::P041_section_in */P041_OBU_sectionlist_enum_T_TM *P041_section_in,
  /* TM_conversions::C_P041_to_legacy_loop::P041_legacy_out */P41_LevelTransitionOrder_T_Packet_Types_Pkg *P041_legacy_out)
{
  /* TM_conversions::C_P041_to_legacy_loop::_L21 */
  static P041_section_enum_T_TM _L21;
  
  (*P041_legacy_out).q_dir = q_dir_in;
  (*P041_legacy_out).q_scale = q_scale_in;
  (*P041_legacy_out).d_leveltr = d_leveltr_in;
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P041_section_enum_T_TM(&_L21, &(*P041_section_in)[i]);
  }
  else {
    kcg_copy_P041_section_enum_T_TM(
      &_L21,
      (P041_section_enum_T_TM *) &DEFAULT_P041_OBU_section_TM);
  }
  (*P041_legacy_out).valid = _L21.valid;
  (*P041_legacy_out).m_leveltr = _L21.m_leveltr;
  (*P041_legacy_out).nid_ntc = _L21.nid_ntc;
  (*P041_legacy_out).l_ackleveltr = _L21.l_ackleveltr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


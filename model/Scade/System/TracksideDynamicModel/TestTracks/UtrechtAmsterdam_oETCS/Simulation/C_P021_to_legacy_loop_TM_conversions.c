/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_loop_TM_conversions.h"

void C_P021_to_legacy_loop_reset_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC)
{
}

/* TM_conversions::C_P021_to_legacy_loop */
void C_P021_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P021_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P021_to_legacy_loop::P021_in */P021_OBU_T_TM *P021_in,
  /* TM_conversions::C_P021_to_legacy_loop::P021_section_in */P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  outC_C_P021_to_legacy_loop_TM_conversions *outC)
{
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L1, P021_section_in);
  outC->_L20 = i;
  if ((0 <= outC->_L20) & (outC->_L20 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L21,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L169 = outC->_L21.g_a;
  outC->_L168 = outC->_L21.q_gdir;
  outC->_L167 = outC->_L21.d_gradient;
  outC->_L166 = outC->_L21.valid;
  kcg_copy_P021_OBU_T_TM(&outC->_L132, P021_in);
  outC->_L134 = outC->_L132.q_scale;
  outC->_L133 = outC->_L132.q_dir;
  outC->_L2.valid = outC->_L166;
  outC->_L2.q_dir = outC->_L133;
  outC->_L2.q_scale = outC->_L134;
  outC->_L2.d_gradient = outC->_L167;
  outC->_L2.q_gdir = outC->_L168;
  outC->_L2.g_a = outC->_L169;
  kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_to_legacy_loop_TM_conversions.c
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */


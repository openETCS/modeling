/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P021_to_legacy_loop */
void C_P021_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P021_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P021_to_legacy_loop::P021_in */ P021_OBU_T_TM *P021_in,
  /* TM_conversions::C_P021_to_legacy_loop::P021_section_in */ P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  /* TM_conversions::C_P021_to_legacy_loop::P015_legacy_out */ P21_GradientProfile_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_conversions::C_P021_to_legacy_loop::_L1 */
  static P021_OBU_sectionlist_enum_T_TM _L1;
  /* TM_conversions::C_P021_to_legacy_loop::_L2 */
  static P21_GradientProfile_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P021_to_legacy_loop::_L20 */
  static kcg_int _L20;
  /* TM_conversions::C_P021_to_legacy_loop::_L21 */
  static P021_section_enum_T_TM _L21;
  /* TM_conversions::C_P021_to_legacy_loop::_L132 */
  static P021_OBU_T_TM _L132;
  /* TM_conversions::C_P021_to_legacy_loop::_L133 */
  static Q_DIR _L133;
  /* TM_conversions::C_P021_to_legacy_loop::_L134 */
  static Q_SCALE _L134;
  /* TM_conversions::C_P021_to_legacy_loop::_L169 */
  static G_A _L169;
  /* TM_conversions::C_P021_to_legacy_loop::_L168 */
  static Q_GDIR _L168;
  /* TM_conversions::C_P021_to_legacy_loop::_L167 */
  static D_GRADIENT _L167;
  /* TM_conversions::C_P021_to_legacy_loop::_L166 */
  static kcg_bool _L166;
  
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L1, P021_section_in);
  _L20 = i;
  if ((0 <= _L20) & (_L20 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L21, &_L1[_L20]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L21,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  _L166 = _L21.valid;
  kcg_copy_P021_OBU_T_TM(&_L132, P021_in);
  _L133 = _L132.q_dir;
  _L134 = _L132.q_scale;
  _L167 = _L21.d_gradient;
  _L168 = _L21.q_gdir;
  _L169 = _L21.g_a;
  _L2.valid = _L166;
  _L2.q_dir = _L133;
  _L2.q_scale = _L134;
  _L2.d_gradient = _L167;
  _L2.q_gdir = _L168;
  _L2.g_a = _L169;
  kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(P015_legacy_out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


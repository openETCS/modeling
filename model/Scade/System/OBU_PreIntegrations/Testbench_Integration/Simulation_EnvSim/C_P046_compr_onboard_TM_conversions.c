/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P046_compr_onboard */
void C_P046_compr_onboard_TM_conversions(
  /* TM_conversions::C_P046_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P046_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P046_compr_onboard::P046_onboard */P046_OBU_T_TM *P046_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P046_compr_onboard::_L22 */
  static kcg_bool _L22;
  /* TM_conversions::C_P046_compr_onboard::_L29 */
  static array_int_4 _L29;
  
  kcg_copy_array_int_4(&_L29, (array_int_4 *) &(*PacketData)[0]);
  (*P046_onboard).n_iter = _L29[3];
  _L22 = _L29[0] == 46;
  (*P046_onboard).valid = _L22;
  IfBlock1_clock_1 = _L29[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
    (*P046_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L29[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P046_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L29[1] == INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P046_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P046_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1 */
  C_P046_unflatten_sections_TM_lib_internal(
    _L22,
    _L29[3],
    (P046_sections_array_flat_T_TM *) &(*PacketData)[4],
    &(*P046_onboard).sections);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */


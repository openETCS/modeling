/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P005_compr_onboard */
void C_P005_compr_onboard_TM_conversions(
  /* TM_conversions::C_P005_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P005_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P005_compr_onboard::P005_onboard */P005_OBU_T_TM *P005_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P005_compr_onboard::_L6 */
  static array_int_3 _L6;
  /* TM_conversions::C_P005_compr_onboard::_L2 */
  static array_int_1 _L2;
  /* TM_conversions::C_P005_compr_onboard::_L22 */
  static kcg_bool _L22;
  
  _L22 = (*PacketData)[0] == 5;
  (*P005_onboard).valid = _L22;
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &(*PacketData)[1]);
  (*P005_onboard).l_packet = _L6[1];
  else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1 = _L6[2] == INT_Q_SCALE_10cm_TM_conversions;
  kcg_copy_array_int_1(&_L2, (array_int_1 *) &(*PacketData)[4]);
  (*P005_onboard).n_iter = _L2[0];
  if (else_clock_1_IfBlock1) {
    (*P005_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
      (*P005_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L6[0] == INT_Q_DIR_both_TM_conversions;
      if (_1_else_clock_1_IfBlock1) {
        (*P005_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P005_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_1) {
    (*P005_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L6[2] == INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P005_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L6[2] == INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P005_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P005_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  /* 1 */
  C_P005_unflatten_sections_TM_lib_internal(
    _L22,
    _L2[0],
    (P005_sections_array_flat_T_TM *) &(*PacketData)[5],
    &(*P005_onboard).sections);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


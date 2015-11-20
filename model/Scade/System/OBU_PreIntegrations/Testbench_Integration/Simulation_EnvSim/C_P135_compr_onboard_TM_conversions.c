/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P135_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P135_compr_onboard */
void C_P135_compr_onboard_TM_conversions(
  /* TM_conversions::C_P135_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P135_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P135_compr_onboard::P135_onboard */P135_OBU_T_TM *P135_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P135_compr_onboard::_L45 */
  static array_int_3 _L45;
  
  kcg_copy_array_int_3(&_L45, (array_int_3 *) &(*PacketData)[0]);
  (*P135_onboard).valid = _L45[0] == 135;
  IfBlock1_clock_1 = _L45[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
    (*P135_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P135_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P135_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P135_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P135_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */


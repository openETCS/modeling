/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P131_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P131_compr_onboard */
void C_P131_compr_onboard_TM_conversions(
  /* TM_conversions::C_P131_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P131_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P131_compr_onboard::P131_onboard */P131_OBU_T_TM *P131_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::C_P131_compr_onboard::_L34 */
  static array_int_9 _L34;
  
  kcg_copy_array_int_9(&_L34, (array_int_9 *) &(*PacketData)[0]);
  (*P131_onboard).valid = _L34[0] == 131;
  _1_else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1 = _L34[3] == INT_Q_SCALE_10cm_TM_conversions;
  if (_1_else_clock_1_IfBlock1) {
    (*P131_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_reverse_TM_conversions;
    if (else_clock_1_IfBlock1) {
      (*P131_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _2_else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_both_TM_conversions;
      if (_2_else_clock_1_IfBlock1) {
        (*P131_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P131_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_1) {
    (*P131_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L34[3] == INT_Q_SCALE_1m_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
      (*P131_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L34[3] == INT_Q_SCALE_10m_TM_conversions;
      if (_1_else_clock_1_IfBlock1) {
        (*P131_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P131_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P131_onboard).d_rbctr = /* 1 */ CAST_Int_to_D_RBCTR_TM_conversions(_L34[4]);
  (*P131_onboard).nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L34[5]);
  (*P131_onboard).nid_rbc = /* 1 */ CAST_Int_to_NID_RBC_TM_conversions(_L34[6]);
  (*P131_onboard).nid_radio = /* 1 */
    CAST_Int_to_NID_RADIO_TM_conversions(_L34[7]);
  (*P131_onboard).q_sleepsession = /* 1 */
    CAST_Int_to_Q_SLEEPSESSION_TM_conversions(_L34[8]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P131_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */


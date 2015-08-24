/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P071_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P071_compr_onboard */
void C_P071_compr_onboard_TM_conversions(
  /* TM_conversions::C_P071_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P071_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P071_compr_onboard::P071_onboard */P071_OBU_T_TM *P071_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _2_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P071_compr_onboard::_L46 */ array_int_7 _L46;
  
  kcg_copy_array_int_7(&_L46, (array_int_7 *) &(*PacketData)[0]);
  (*P071_onboard).valid = _L46[0] == 71;
  IfBlock1_clock_2 = _L46[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_2) {
  }
  else {
    _2_else_clock_2_IfBlock1 = _L46[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_2_IfBlock1) {
    }
    else {
      else_clock_2_IfBlock1 = _L46[1] == INT_Q_DIR_both_TM_conversions;
    }
  }
  IfBlock1_clock_1 = _L46[3] == INT_Q_SCALE_10cm_TM_conversions;
  if (IfBlock1_clock_1) {
  }
  else {
    _1_else_clock_1_IfBlock1 = _L46[3] == INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
    }
    else {
      else_clock_1_IfBlock1 = _L46[3] == INT_Q_SCALE_10m_TM_conversions;
    }
  }
  if (IfBlock1_clock_2) {
    (*P071_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else if (_2_else_clock_2_IfBlock1) {
    (*P071_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
  }
  else if (else_clock_2_IfBlock1) {
    (*P071_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
  else {
    (*P071_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
  if (IfBlock1_clock_1) {
    (*P071_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else if (_1_else_clock_1_IfBlock1) {
    (*P071_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
  }
  else if (else_clock_1_IfBlock1) {
    (*P071_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
  }
  else {
    (*P071_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  (*P071_onboard).d_adhesion = /* 1 */
    CAST_Int_to_D_ADHESION_TM_conversions(_L46[4]);
  (*P071_onboard).l_adhesion = /* 1 */
    CAST_Int_to_L_ADHESION_TM_conversions(_L46[5]);
  (*P071_onboard).m_adhesion = /* 1 */
    CAST_Int_to_M_ADHESION_TM_conversions(_L46[6]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P071_compr_onboard_TM_conversions.c
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */


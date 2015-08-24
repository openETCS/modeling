/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P136_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P136_compr_onboard */
void C_P136_compr_onboard_TM_conversions(
  /* TM_conversions::C_P136_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P136_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P136_compr_onboard::P136_onboard */P136_OBU_T_TM *P136_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P136_compr_onboard::_L45 */ array_int_6 _L45;
  
  kcg_copy_array_int_6(&_L45, (array_int_6 *) &(*PacketData)[0]);
  (*P136_onboard).valid = _L45[0] == 136;
  IfBlock1_clock_1 = _L45[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
    (*P136_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P136_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L45[1] == INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P136_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P136_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*P136_onboard).q_newcountry = /* 1 */
    CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(_L45[3]);
  (*P136_onboard).nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L45[4]);
  (*P136_onboard).nid_bg = /* 1 */ CAST_Int_to_NID_BG_TM_conversions(_L45[5]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P136_compr_onboard_TM_conversions.c
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P057_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P057_compr_onboard */
void C_P057_compr_onboard_TM_conversions(
  /* TM_conversions::C_P057_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P057_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P057_compr_onboard::P057_onboard */P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *P057_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P057_compr_onboard::_L34 */
  static array_int_6 _L34;
  
  kcg_copy_array_int_6(&_L34, (array_int_6 *) &(*PacketData)[0]);
  (*P057_onboard).valid = _L34[0] == 57;
  IfBlock1_clock_1 = _L34[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
    (*P057_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P057_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P057_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P057_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*P057_onboard).t_mar = /* 1 */ CAST_Int_to_T_MAR_TM_conversions(_L34[3]);
  (*P057_onboard).t_timeoutrqst = /* 1 */
    CAST_Int_to_T_TIMEOUTRQST_TM_conversions(_L34[4]);
  (*P057_onboard).t_cycrqst = /* 1 */
    CAST_Int_to_T_CYCRQST_TM_conversions(_L34[5]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P057_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */


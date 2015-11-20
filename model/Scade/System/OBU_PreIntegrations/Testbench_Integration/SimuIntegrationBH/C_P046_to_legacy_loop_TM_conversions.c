/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P046_to_legacy_loop */
void C_P046_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P046_to_legacy_loop::q_dir_in */ Q_DIR q_dir_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_section_in */ P046_OBU_sectionlist_enum_T_TM *P046_section_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_legacy_out */ P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *P046_legacy_out)
{
  /* TM_conversions::C_P046_to_legacy_loop::_L1 */
  static P046_OBU_sectionlist_enum_T_TM _L1;
  /* TM_conversions::C_P046_to_legacy_loop::_L2 */
  static P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P046_to_legacy_loop::_L20 */
  static kcg_int _L20;
  /* TM_conversions::C_P046_to_legacy_loop::_L21 */
  static P046_section_enum_T_TM _L21;
  /* TM_conversions::C_P046_to_legacy_loop::_L25 */
  static NID_NTC _L25;
  /* TM_conversions::C_P046_to_legacy_loop::_L26 */
  static M_LEVELTR _L26;
  /* TM_conversions::C_P046_to_legacy_loop::_L27 */
  static kcg_bool _L27;
  /* TM_conversions::C_P046_to_legacy_loop::_L28 */
  static Q_DIR _L28;
  
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&_L1, P046_section_in);
  _L20 = i;
  if ((0 <= _L20) & (_L20 < 33)) {
    kcg_copy_P046_section_enum_T_TM(&_L21, &_L1[_L20]);
  }
  else {
    kcg_copy_P046_section_enum_T_TM(
      &_L21,
      (P046_section_enum_T_TM *) &DEFAULT_P046_OBU_section_TM);
  }
  _L27 = _L21.valid;
  _L28 = q_dir_in;
  _L26 = _L21.m_leveltr;
  _L25 = _L21.nid_ntc;
  _L2.valid = _L27;
  _L2.q_dir = _L28;
  _L2.m_leveltr = _L26;
  _L2.nid_ntc = _L25;
  kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
    P046_legacy_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


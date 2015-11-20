/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P058_to_legacy_loop */
void C_P058_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P058_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P058_to_legacy_loop::P058_in */ P058_OBU_sectionlist_enum_T_TM *P058_in,
  /* TM_conversions::C_P058_to_legacy_loop::P058_legacy_iter_out */ IterPacket58_T_Packet_Types_Pkg *P058_legacy_iter_out)
{
  static kcg_bool noname;
  /* TM_conversions::C_P058_to_legacy_loop::_L1 */
  static P058_OBU_sectionlist_enum_T_TM _L1;
  /* TM_conversions::C_P058_to_legacy_loop::_L2 */
  static IterPacket58_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P058_to_legacy_loop::_L5 */
  static Q_LGTLOC _L5;
  /* TM_conversions::C_P058_to_legacy_loop::_L4 */
  static D_LOC _L4;
  /* TM_conversions::C_P058_to_legacy_loop::_L3 */
  static kcg_bool _L3;
  /* TM_conversions::C_P058_to_legacy_loop::_L20 */
  static kcg_int _L20;
  /* TM_conversions::C_P058_to_legacy_loop::_L21 */
  static P058_section_enum_T_TM _L21;
  
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(&_L1, P058_in);
  _L20 = i;
  if ((0 <= _L20) & (_L20 < 32)) {
    kcg_copy_P058_section_enum_T_TM(&_L21, &_L1[_L20]);
  }
  else {
    kcg_copy_P058_section_enum_T_TM(
      &_L21,
      (P058_section_enum_T_TM *) &DEFAULT_P058_OBU_section_TM);
  }
  _L4 = _L21.d_loc;
  _L5 = _L21.q_lgtloc;
  _L2.d_loc = _L4;
  _L2.q_lgtloc = _L5;
  kcg_copy_IterPacket58_T_Packet_Types_Pkg(P058_legacy_iter_out, &_L2);
  _L3 = _L21.valid;
  noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


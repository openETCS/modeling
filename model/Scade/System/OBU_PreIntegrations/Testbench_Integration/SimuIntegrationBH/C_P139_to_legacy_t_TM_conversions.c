/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P139_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P139_to_legacy_t */
void C_P139_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P139_to_legacy_t::P139_in */ P139_OBU_T_TM *P139_in,
  /* TM_conversions::C_P139_to_legacy_t::P139_legacy_out */ P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P139_legacy_out)
{
  /* TM_conversions::C_P139_to_legacy_t::_L1 */
  static P139_OBU_T_TM _L1;
  /* TM_conversions::C_P139_to_legacy_t::_L2 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P139_to_legacy_t::_L7 */
  static V_REVERSE _L7;
  /* TM_conversions::C_P139_to_legacy_t::_L6 */
  static D_REVERSE _L6;
  /* TM_conversions::C_P139_to_legacy_t::_L5 */
  static Q_SCALE _L5;
  /* TM_conversions::C_P139_to_legacy_t::_L4 */
  static Q_DIR _L4;
  /* TM_conversions::C_P139_to_legacy_t::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_P139_OBU_T_TM(&_L1, P139_in);
  _L3 = _L1.valid;
  _L4 = _L1.q_dir;
  _L5 = _L1.q_scale;
  _L6 = _L1.d_reverse;
  _L7 = _L1.v_reverse;
  _L2.valid = _L3;
  _L2.q_dir = _L4;
  _L2.q_scale = _L5;
  _L2.d_reverse = _L6;
  _L2.v_reverse = _L7;
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    P139_legacy_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P139_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P138_to_legacy_t */
void C_P138_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P138_to_legacy_t::P138_in */ P138_OBU_T_TM *P138_in,
  /* TM_conversions::C_P138_to_legacy_t::P138_legacy_out */ P138_ReversingAreaInformation_T_Packet_Types_Pkg *P138_legacy_out)
{
  /* TM_conversions::C_P138_to_legacy_t::_L1 */
  static P138_OBU_T_TM _L1;
  /* TM_conversions::C_P138_to_legacy_t::_L2 */
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P138_to_legacy_t::_L7 */
  static L_REVERSEAREA _L7;
  /* TM_conversions::C_P138_to_legacy_t::_L6 */
  static D_STARTREVERSE _L6;
  /* TM_conversions::C_P138_to_legacy_t::_L5 */
  static Q_SCALE _L5;
  /* TM_conversions::C_P138_to_legacy_t::_L4 */
  static Q_DIR _L4;
  /* TM_conversions::C_P138_to_legacy_t::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_P138_OBU_T_TM(&_L1, P138_in);
  _L3 = _L1.valid;
  _L4 = _L1.q_dir;
  _L5 = _L1.q_scale;
  _L6 = _L1.d_startreverse;
  _L7 = _L1.l_reversearea;
  _L2.valid = _L3;
  _L2.q_dir = _L4;
  _L2.q_scale = _L5;
  _L2.d_startreverse = _L6;
  _L2.l_reversearea = _L7;
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    P138_legacy_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P138_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


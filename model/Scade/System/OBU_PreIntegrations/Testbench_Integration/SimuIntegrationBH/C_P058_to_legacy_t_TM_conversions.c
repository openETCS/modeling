/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P058_to_legacy_t */
void C_P058_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P058_to_legacy_t::P058_in */ P058_OBU_T_TM *P058_in,
  /* TM_conversions::C_P058_to_legacy_t::P058_legacy_out */ P58_PositionReportParameters_T_Packet_Types_Pkg *P058_legacy_out)
{
  static kcg_int i1;
  static kcg_int i;
  /* TM_conversions::C_P058_to_legacy_t::_L1 */
  static P058_OBU_T_TM _L1;
  /* TM_conversions::C_P058_to_legacy_t::_L2 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P058_to_legacy_t::_L10 */
  static P058_OBU_sectionlist_enum_T_TM _L10;
  /* TM_conversions::C_P058_to_legacy_t::_L9 */
  static N_ITER _L9;
  /* TM_conversions::C_P058_to_legacy_t::_L8 */
  static M_LOC _L8;
  /* TM_conversions::C_P058_to_legacy_t::_L7 */
  static D_CYCLOC _L7;
  /* TM_conversions::C_P058_to_legacy_t::_L6 */
  static T_CYCLOC _L6;
  /* TM_conversions::C_P058_to_legacy_t::_L5 */
  static Q_SCALE _L5;
  /* TM_conversions::C_P058_to_legacy_t::_L4 */
  static Q_DIR _L4;
  /* TM_conversions::C_P058_to_legacy_t::_L3 */
  static kcg_bool _L3;
  /* TM_conversions::C_P058_to_legacy_t::_L11 */
  static kcg_int _L11;
  /* TM_conversions::C_P058_to_legacy_t::_L12 */
  static kcg_int _L12;
  /* TM_conversions::C_P058_to_legacy_t::_L20 */
  static IterPacket58List_T_Packet_Types_Pkg _L20;
  /* TM_conversions::C_P058_to_legacy_t::_L22 */
  static array_168667 _L22;
  
  kcg_copy_P058_OBU_T_TM(&_L1, P058_in);
  _L3 = _L1.valid;
  _L11 = 58;
  _L4 = _L1.q_dir;
  _L12 = 0;
  _L5 = _L1.q_scale;
  _L6 = _L1.t_cycloc;
  _L7 = _L1.d_cycloc;
  _L8 = _L1.m_loc;
  _L9 = _L1.n_iter;
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(&_L10, &_L1.sections);
  /* pow */ for (i1 = 0; i1 < 2; i1++) {
    kcg_copy_P058_OBU_sectionlist_enum_T_TM(&_L22[i1], &_L10);
  }
  /* 1 */ for (i = 0; i < 2; i++) {
    /* 1 */ C_P058_to_legacy_loop_TM_conversions(i, &_L22[i], &_L20[i]);
  }
  _L2.valid = _L3;
  _L2.nid_packet = _L11;
  _L2.q_dir = _L4;
  _L2.l_packet = _L12;
  _L2.q_scale = _L5;
  _L2.t_cycloc = _L6;
  _L2.d_cycloc = _L7;
  _L2.m_loc = _L8;
  _L2.n_iter = _L9;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&_L2.iterPacket58List, &_L20);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    P058_legacy_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


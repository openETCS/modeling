/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_loop */
void C_P015_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P015_to_legacy_loop::P015_in */ P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_section_in */ P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_legacy_out */ P15_Level23MovementAuthority_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_conversions::C_P015_to_legacy_loop::_L1 */
  static P015_OBU_sectionlist_enum_T_TM _L1;
  /* TM_conversions::C_P015_to_legacy_loop::_L2 */
  static P15_Level23MovementAuthority_T_Packet_Types_Pkg _L2;
  /* TM_conversions::C_P015_to_legacy_loop::_L20 */
  static kcg_int _L20;
  /* TM_conversions::C_P015_to_legacy_loop::_L21 */
  static P015_section_enum_T_TM _L21;
  /* TM_conversions::C_P015_to_legacy_loop::_L85 */
  static kcg_bool _L85;
  /* TM_conversions::C_P015_to_legacy_loop::_L86 */
  static L_SECTION _L86;
  /* TM_conversions::C_P015_to_legacy_loop::_L87 */
  static Q_SECTIONTIMER _L87;
  /* TM_conversions::C_P015_to_legacy_loop::_L88 */
  static T_SECTIONTIMER _L88;
  /* TM_conversions::C_P015_to_legacy_loop::_L89 */
  static D_SECTIONTIMERSTOPLOC _L89;
  /* TM_conversions::C_P015_to_legacy_loop::_L132 */
  static P015_OBU_T_TM _L132;
  /* TM_conversions::C_P015_to_legacy_loop::_L133 */
  static Q_DIR _L133;
  /* TM_conversions::C_P015_to_legacy_loop::_L134 */
  static Q_SCALE _L134;
  /* TM_conversions::C_P015_to_legacy_loop::_L135 */
  static V_LOA _L135;
  /* TM_conversions::C_P015_to_legacy_loop::_L136 */
  static T_LOA _L136;
  /* TM_conversions::C_P015_to_legacy_loop::_L137 */
  static P015_OBU_T_TM _L137;
  /* TM_conversions::C_P015_to_legacy_loop::_L138 */
  static L_ENDSECTION _L138;
  /* TM_conversions::C_P015_to_legacy_loop::_L139 */
  static Q_SECTIONTIMER _L139;
  /* TM_conversions::C_P015_to_legacy_loop::_L140 */
  static T_SECTIONTIMER _L140;
  /* TM_conversions::C_P015_to_legacy_loop::_L142 */
  static D_SECTIONTIMERSTOPLOC _L142;
  /* TM_conversions::C_P015_to_legacy_loop::_L143 */
  static Q_ENDTIMER _L143;
  /* TM_conversions::C_P015_to_legacy_loop::_L144 */
  static T_ENDTIMER _L144;
  /* TM_conversions::C_P015_to_legacy_loop::_L145 */
  static D_ENDTIMERSTARTLOC _L145;
  /* TM_conversions::C_P015_to_legacy_loop::_L146 */
  static Q_DANGERPOINT _L146;
  /* TM_conversions::C_P015_to_legacy_loop::_L147 */
  static D_DP _L147;
  /* TM_conversions::C_P015_to_legacy_loop::_L149 */
  static V_RELEASEDP _L149;
  /* TM_conversions::C_P015_to_legacy_loop::_L150 */
  static Q_OVERLAP _L150;
  /* TM_conversions::C_P015_to_legacy_loop::_L151 */
  static D_STARTOL _L151;
  /* TM_conversions::C_P015_to_legacy_loop::_L152 */
  static T_OL _L152;
  /* TM_conversions::C_P015_to_legacy_loop::_L153 */
  static D_OL _L153;
  /* TM_conversions::C_P015_to_legacy_loop::_L154 */
  static V_RELEASEOL _L154;
  /* TM_conversions::C_P015_to_legacy_loop::_L155 */
  static kcg_bool _L155;
  /* TM_conversions::C_P015_to_legacy_loop::_L156 */
  static kcg_bool _L156;
  /* TM_conversions::C_P015_to_legacy_loop::_L157 */
  static kcg_int _L157;
  /* TM_conversions::C_P015_to_legacy_loop::_L158 */
  static kcg_bool _L158;
  /* TM_conversions::C_P015_to_legacy_loop::_L159 */
  static kcg_int _L159;
  
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L1, P015_section_in);
  _L157 = i;
  _L159 = 0;
  _L158 = _L157 > _L159;
  _L20 = i;
  if ((0 <= _L20) & (_L20 < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L21, &_L1[_L20]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &_L21,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  _L85 = _L21.valid;
  kcg_copy_P015_OBU_T_TM(&_L132, P015_in);
  _L155 = _L132.valid;
  /* 1 */ if (_L158) {
    _L156 = _L85;
  }
  else {
    _L156 = _L155;
  }
  _L133 = _L132.q_dir;
  _L134 = _L132.q_scale;
  _L135 = _L132.v_loa;
  _L136 = _L132.t_loa;
  _L86 = _L21.l_section;
  _L87 = _L21.q_sectiontimer;
  _L88 = _L21.t_sectiontimer;
  _L89 = _L21.d_sectiontimerstoploc;
  kcg_copy_P015_OBU_T_TM(&_L137, P015_in);
  _L138 = _L137.l_endsection;
  _L139 = _L137.q_sectiontimer;
  _L140 = _L137.t_sectiontimer;
  _L142 = _L137.d_sectiontimerstoploc;
  _L143 = _L137.q_endtimer;
  _L144 = _L137.t_endtimer;
  _L145 = _L137.d_endtimerstartloc;
  _L146 = _L137.q_dangerpoint;
  _L147 = _L137.d_dp;
  _L149 = _L137.v_releasedp;
  _L150 = _L137.q_overlap;
  _L151 = _L137.d_startol;
  _L152 = _L137.t_ol;
  _L153 = _L137.d_ol;
  _L154 = _L137.v_releaseol;
  _L2.valid = _L156;
  _L2.q_dir = _L133;
  _L2.q_scale = _L134;
  _L2.v_loa = _L135;
  _L2.t_loa = _L136;
  _L2.l_section = _L86;
  _L2.q_sectiontimer_k = _L87;
  _L2.t_sectiontimer_k = _L88;
  _L2.d_sectiontimerstoploc_k = _L89;
  _L2.l_endsection = _L138;
  _L2.q_sectiontimer = _L139;
  _L2.t_sectiontimer = _L140;
  _L2.d_sectiontimerstoploc = _L142;
  _L2.q_endtimer = _L143;
  _L2.t_endtimer = _L144;
  _L2.d_endtimerstartloc = _L145;
  _L2.q_dangerpoint = _L146;
  _L2.d_dp = _L147;
  _L2.v_releasedp = _L149;
  _L2.q_overlap = _L150;
  _L2.d_startol = _L151;
  _L2.t_ol = _L152;
  _L2.d_ol = _L153;
  _L2.v_releaseol = _L154;
  kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
    P015_legacy_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_to_legacy_loop_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */


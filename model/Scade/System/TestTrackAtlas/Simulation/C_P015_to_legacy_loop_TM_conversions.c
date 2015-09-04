/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_loop_TM_conversions.h"

void C_P015_to_legacy_loop_reset_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC)
{
}

/* TM_conversions::C_P015_to_legacy_loop */
void C_P015_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P015_to_legacy_loop::P015_in */P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_C_P015_to_legacy_loop_TM_conversions *outC)
{
  outC->_L159 = 0;
  outC->_L157 = i;
  outC->_L158 = outC->_L157 > outC->_L159;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L1, P015_section_in);
  outC->_L20 = i;
  if ((0 <= outC->_L20) & (outC->_L20 < 32)) {
    kcg_copy_P015_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &outC->_L21,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  outC->_L85 = outC->_L21.valid;
  kcg_copy_P015_OBU_T_TM(&outC->_L132, P015_in);
  outC->_L155 = outC->_L132.valid;
  if (outC->_L158) {
    outC->_L156 = outC->_L85;
  }
  else {
    outC->_L156 = outC->_L155;
  }
  kcg_copy_P015_OBU_T_TM(&outC->_L137, P015_in);
  outC->_L154 = outC->_L137.v_releaseol;
  outC->_L153 = outC->_L137.d_ol;
  outC->_L152 = outC->_L137.t_ol;
  outC->_L151 = outC->_L137.d_startol;
  outC->_L150 = outC->_L137.q_overlap;
  outC->_L149 = outC->_L137.v_releasedp;
  outC->_L147 = outC->_L137.d_dp;
  outC->_L146 = outC->_L137.q_dangerpoint;
  outC->_L145 = outC->_L137.d_endtimerstartloc;
  outC->_L144 = outC->_L137.t_endtimer;
  outC->_L143 = outC->_L137.q_endtimer;
  outC->_L142 = outC->_L137.d_sectiontimerstoploc;
  outC->_L140 = outC->_L137.t_sectiontimer;
  outC->_L139 = outC->_L137.q_sectiontimer;
  outC->_L138 = outC->_L137.l_endsection;
  outC->_L136 = outC->_L132.t_loa;
  outC->_L135 = outC->_L132.v_loa;
  outC->_L134 = outC->_L132.q_scale;
  outC->_L133 = outC->_L132.q_dir;
  outC->_L89 = outC->_L21.d_sectiontimerstoploc;
  outC->_L88 = outC->_L21.t_sectiontimer;
  outC->_L87 = outC->_L21.q_sectiontimer;
  outC->_L86 = outC->_L21.l_section;
  outC->_L2.valid = outC->_L156;
  outC->_L2.q_dir = outC->_L133;
  outC->_L2.q_scale = outC->_L134;
  outC->_L2.v_loa = outC->_L135;
  outC->_L2.t_loa = outC->_L136;
  outC->_L2.l_section = outC->_L86;
  outC->_L2.q_sectiontimer_k = outC->_L87;
  outC->_L2.t_sectiontimer_k = outC->_L88;
  outC->_L2.d_sectiontimerstoploc_k = outC->_L89;
  outC->_L2.l_endsection = outC->_L138;
  outC->_L2.q_sectiontimer = outC->_L139;
  outC->_L2.t_sectiontimer = outC->_L140;
  outC->_L2.d_sectiontimerstoploc = outC->_L142;
  outC->_L2.q_endtimer = outC->_L143;
  outC->_L2.t_endtimer = outC->_L144;
  outC->_L2.d_endtimerstartloc = outC->_L145;
  outC->_L2.q_dangerpoint = outC->_L146;
  outC->_L2.d_dp = outC->_L147;
  outC->_L2.v_releasedp = outC->_L149;
  outC->_L2.q_overlap = outC->_L150;
  outC->_L2.d_startol = outC->_L151;
  outC->_L2.t_ol = outC->_L152;
  outC->_L2.d_ol = outC->_L153;
  outC->_L2.v_releaseol = outC->_L154;
  kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_to_legacy_loop_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */


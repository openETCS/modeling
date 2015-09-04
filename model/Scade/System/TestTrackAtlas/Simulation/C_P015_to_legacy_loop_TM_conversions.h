/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _C_P015_to_legacy_loop_TM_conversions_H_
#define _C_P015_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P15_Level23MovementAuthority_T_Packet_Types_Pkg /* TM_conversions::C_P015_to_legacy_loop::P015_legacy_out */ P015_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P015_to_legacy_loop::_L1 */ _L1;
  P15_Level23MovementAuthority_T_Packet_Types_Pkg /* TM_conversions::C_P015_to_legacy_loop::_L2 */ _L2;
  kcg_int /* TM_conversions::C_P015_to_legacy_loop::_L20 */ _L20;
  P015_section_enum_T_TM /* TM_conversions::C_P015_to_legacy_loop::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P015_to_legacy_loop::_L85 */ _L85;
  L_SECTION /* TM_conversions::C_P015_to_legacy_loop::_L86 */ _L86;
  Q_SECTIONTIMER /* TM_conversions::C_P015_to_legacy_loop::_L87 */ _L87;
  T_SECTIONTIMER /* TM_conversions::C_P015_to_legacy_loop::_L88 */ _L88;
  D_SECTIONTIMERSTOPLOC /* TM_conversions::C_P015_to_legacy_loop::_L89 */ _L89;
  P015_OBU_T_TM /* TM_conversions::C_P015_to_legacy_loop::_L132 */ _L132;
  Q_DIR /* TM_conversions::C_P015_to_legacy_loop::_L133 */ _L133;
  Q_SCALE /* TM_conversions::C_P015_to_legacy_loop::_L134 */ _L134;
  V_LOA /* TM_conversions::C_P015_to_legacy_loop::_L135 */ _L135;
  T_LOA /* TM_conversions::C_P015_to_legacy_loop::_L136 */ _L136;
  P015_OBU_T_TM /* TM_conversions::C_P015_to_legacy_loop::_L137 */ _L137;
  L_ENDSECTION /* TM_conversions::C_P015_to_legacy_loop::_L138 */ _L138;
  Q_SECTIONTIMER /* TM_conversions::C_P015_to_legacy_loop::_L139 */ _L139;
  T_SECTIONTIMER /* TM_conversions::C_P015_to_legacy_loop::_L140 */ _L140;
  D_SECTIONTIMERSTOPLOC /* TM_conversions::C_P015_to_legacy_loop::_L142 */ _L142;
  Q_ENDTIMER /* TM_conversions::C_P015_to_legacy_loop::_L143 */ _L143;
  T_ENDTIMER /* TM_conversions::C_P015_to_legacy_loop::_L144 */ _L144;
  D_ENDTIMERSTARTLOC /* TM_conversions::C_P015_to_legacy_loop::_L145 */ _L145;
  Q_DANGERPOINT /* TM_conversions::C_P015_to_legacy_loop::_L146 */ _L146;
  D_DP /* TM_conversions::C_P015_to_legacy_loop::_L147 */ _L147;
  V_RELEASEDP /* TM_conversions::C_P015_to_legacy_loop::_L149 */ _L149;
  Q_OVERLAP /* TM_conversions::C_P015_to_legacy_loop::_L150 */ _L150;
  D_STARTOL /* TM_conversions::C_P015_to_legacy_loop::_L151 */ _L151;
  T_OL /* TM_conversions::C_P015_to_legacy_loop::_L152 */ _L152;
  D_OL /* TM_conversions::C_P015_to_legacy_loop::_L153 */ _L153;
  V_RELEASEOL /* TM_conversions::C_P015_to_legacy_loop::_L154 */ _L154;
  kcg_bool /* TM_conversions::C_P015_to_legacy_loop::_L155 */ _L155;
  kcg_bool /* TM_conversions::C_P015_to_legacy_loop::_L156 */ _L156;
  kcg_int /* TM_conversions::C_P015_to_legacy_loop::_L157 */ _L157;
  kcg_bool /* TM_conversions::C_P015_to_legacy_loop::_L158 */ _L158;
  kcg_int /* TM_conversions::C_P015_to_legacy_loop::_L159 */ _L159;
} outC_C_P015_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_to_legacy_loop */
extern void C_P015_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P015_to_legacy_loop::P015_in */P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_loop::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_C_P015_to_legacy_loop_TM_conversions *outC);

extern void C_P015_to_legacy_loop_reset_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC);

#endif /* _C_P015_to_legacy_loop_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_to_legacy_loop_TM_conversions.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */


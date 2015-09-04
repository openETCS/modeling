/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _C_P021_to_legacy_loop_TM_conversions_H_
#define _C_P021_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P21_GradientProfile_T_Packet_Types_Pkg /* TM_conversions::C_P021_to_legacy_loop::P015_legacy_out */ P015_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P021_to_legacy_loop::_L1 */ _L1;
  P21_GradientProfile_T_Packet_Types_Pkg /* TM_conversions::C_P021_to_legacy_loop::_L2 */ _L2;
  kcg_int /* TM_conversions::C_P021_to_legacy_loop::_L20 */ _L20;
  P021_section_enum_T_TM /* TM_conversions::C_P021_to_legacy_loop::_L21 */ _L21;
  P021_OBU_T_TM /* TM_conversions::C_P021_to_legacy_loop::_L132 */ _L132;
  Q_DIR /* TM_conversions::C_P021_to_legacy_loop::_L133 */ _L133;
  Q_SCALE /* TM_conversions::C_P021_to_legacy_loop::_L134 */ _L134;
  G_A /* TM_conversions::C_P021_to_legacy_loop::_L169 */ _L169;
  Q_GDIR /* TM_conversions::C_P021_to_legacy_loop::_L168 */ _L168;
  D_GRADIENT /* TM_conversions::C_P021_to_legacy_loop::_L167 */ _L167;
  kcg_bool /* TM_conversions::C_P021_to_legacy_loop::_L166 */ _L166;
} outC_C_P021_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P021_to_legacy_loop */
extern void C_P021_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P021_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P021_to_legacy_loop::P021_in */P021_OBU_T_TM *P021_in,
  /* TM_conversions::C_P021_to_legacy_loop::P021_section_in */P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  outC_C_P021_to_legacy_loop_TM_conversions *outC);

extern void C_P021_to_legacy_loop_reset_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC);

#endif /* _C_P021_to_legacy_loop_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_to_legacy_loop_TM_conversions.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */


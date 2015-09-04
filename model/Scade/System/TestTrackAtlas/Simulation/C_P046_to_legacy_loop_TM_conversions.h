/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _C_P046_to_legacy_loop_TM_conversions_H_
#define _C_P046_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg /* TM_conversions::C_P046_to_legacy_loop::P046_legacy_out */ P046_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P046_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P046_to_legacy_loop::_L1 */ _L1;
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg /* TM_conversions::C_P046_to_legacy_loop::_L2 */ _L2;
  kcg_int /* TM_conversions::C_P046_to_legacy_loop::_L20 */ _L20;
  P046_section_enum_T_TM /* TM_conversions::C_P046_to_legacy_loop::_L21 */ _L21;
  NID_NTC /* TM_conversions::C_P046_to_legacy_loop::_L25 */ _L25;
  M_LEVELTR /* TM_conversions::C_P046_to_legacy_loop::_L26 */ _L26;
  kcg_bool /* TM_conversions::C_P046_to_legacy_loop::_L27 */ _L27;
  Q_DIR /* TM_conversions::C_P046_to_legacy_loop::_L28 */ _L28;
} outC_C_P046_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P046_to_legacy_loop */
extern void C_P046_to_legacy_loop_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_loop::i */kcg_int i,
  /* TM_conversions::C_P046_to_legacy_loop::q_dir_in */Q_DIR q_dir_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_section_in */P046_OBU_sectionlist_enum_T_TM *P046_section_in,
  outC_C_P046_to_legacy_loop_TM_conversions *outC);

extern void C_P046_to_legacy_loop_reset_TM_conversions(
  outC_C_P046_to_legacy_loop_TM_conversions *outC);

#endif /* _C_P046_to_legacy_loop_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_to_legacy_loop_TM_conversions.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */


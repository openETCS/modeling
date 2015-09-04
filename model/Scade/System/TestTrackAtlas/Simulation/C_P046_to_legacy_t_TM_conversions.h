/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _C_P046_to_legacy_t_TM_conversions_H_
#define _C_P046_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"
#include "C_P046_to_legacy_loop_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* TM_conversions::C_P046_to_legacy_t::P046_legacy_out */ P046_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P046_to_legacy_loop_TM_conversions /* 1 */ Context_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P046_OBU_T_TM /* TM_conversions::C_P046_to_legacy_t::_L1 */ _L1;
  P046_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P046_to_legacy_t::_L6 */ _L6;
  N_ITER /* TM_conversions::C_P046_to_legacy_t::_L5 */ _L5;
  Q_DIR /* TM_conversions::C_P046_to_legacy_t::_L4 */ _L4;
  kcg_bool /* TM_conversions::C_P046_to_legacy_t::_L3 */ _L3;
  array__23398 /* TM_conversions::C_P046_to_legacy_t::_L20 */ _L20;
  array__24054 /* TM_conversions::C_P046_to_legacy_t::_L23 */ _L23;
  array__24048 /* TM_conversions::C_P046_to_legacy_t::_L26 */ _L26;
} outC_C_P046_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P046_to_legacy_t */
extern void C_P046_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */P046_OBU_T_TM *P046_in,
  outC_C_P046_to_legacy_t_TM_conversions *outC);

extern void C_P046_to_legacy_t_reset_TM_conversions(
  outC_C_P046_to_legacy_t_TM_conversions *outC);

#endif /* _C_P046_to_legacy_t_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_to_legacy_t_TM_conversions.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */


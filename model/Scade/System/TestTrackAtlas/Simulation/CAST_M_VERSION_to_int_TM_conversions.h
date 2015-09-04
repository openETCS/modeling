/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _CAST_M_VERSION_to_int_TM_conversions_H_
#define _CAST_M_VERSION_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::m_version_int */ m_version_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::then::_L4 */ _L44_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else */ else_clock_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else::else::_L2 */ _L27_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else::else::_L1 */ _L1_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else::then::_L2 */ _L26_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else::then::_L4 */ _L45_IfBlock1;
  kcg_int /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::then::_L5 */ _L53_IfBlock1;
  M_VERSION /* TM_conversions::CAST_M_VERSION_to_int::m_version_in */ m_version_in;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::error */ error;
  M_VERSION /* TM_conversions::CAST_M_VERSION_to_int::_L4 */ _L4;
  kcg_bool /* TM_conversions::CAST_M_VERSION_to_int::_L5 */ _L5;
} outC_CAST_M_VERSION_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_M_VERSION_to_int */
extern void CAST_M_VERSION_to_int_TM_conversions(
  /* TM_conversions::CAST_M_VERSION_to_int::m_version */M_VERSION m_version,
  outC_CAST_M_VERSION_to_int_TM_conversions *outC);

extern void CAST_M_VERSION_to_int_reset_TM_conversions(
  outC_CAST_M_VERSION_to_int_TM_conversions *outC);

#endif /* _CAST_M_VERSION_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_VERSION_to_int_TM_conversions.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */


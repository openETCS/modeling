/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _CAST_Int_to_M_NVDERUN_TM_conversions_H_
#define _CAST_Int_to_M_NVDERUN_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_NVDERUN /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ m_nvderun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_NVDERUN /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::else::_L2 */ _L2_IfBlock1;
  M_NVDERUN /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  M_NVDERUN /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::then::_L7 */ _L71_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_in */ m_nvderun_in;
  kcg_int /* TM_conversions::CAST_Int_to_M_NVDERUN::_L21 */ _L21;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVDERUN::_L20 */ _L20;
} outC_CAST_Int_to_M_NVDERUN_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_NVDERUN */
extern void CAST_Int_to_M_NVDERUN_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */kcg_int m_nvderun_int,
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC);

extern void CAST_Int_to_M_NVDERUN_reset_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC);

#endif /* _CAST_Int_to_M_NVDERUN_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVDERUN_TM_conversions.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */


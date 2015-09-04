/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _CAST_Int_to_M_NVCONTACT_TM_conversions_H_
#define _CAST_Int_to_M_NVCONTACT_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_NVCONTACT /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ m_nvcontact;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::then::_L5 */ _L5_IfBlock1;
  M_NVCONTACT /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::then::_L3 */ _L33_IfBlock1;
  M_NVCONTACT /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::else::_L3 */ _L34_IfBlock1;
  M_NVCONTACT /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else::else::_L2 */ _L25_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else */ else_clock_IfBlock1;
  M_NVCONTACT /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::then::_L4 */ _L42_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact_in */ m_nvcontact_in;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_M_NVCONTACT::_L2 */ _L2;
  kcg_bool /* TM_conversions::CAST_Int_to_M_NVCONTACT::_L3 */ _L3;
} outC_CAST_Int_to_M_NVCONTACT_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_NVCONTACT */
extern void CAST_Int_to_M_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::int_in */kcg_int int_in,
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions *outC);

extern void CAST_Int_to_M_NVCONTACT_reset_TM_conversions(
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions *outC);

#endif /* _CAST_Int_to_M_NVCONTACT_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVCONTACT_TM_conversions.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */


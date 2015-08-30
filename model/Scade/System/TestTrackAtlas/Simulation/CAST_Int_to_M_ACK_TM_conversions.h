/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */
#ifndef _CAST_Int_to_M_ACK_TM_conversions_H_
#define _CAST_Int_to_M_ACK_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_ACK /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ m_ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_ACK /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::else::_L2 */ _L2_IfBlock1;
  M_ACK /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  M_ACK /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::then::_L7 */ _L71_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_M_ACK::m_ack_in */ m_ack_in;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::error */ error;
  kcg_bool /* TM_conversions::CAST_Int_to_M_ACK::_L5 */ _L5;
  kcg_int /* TM_conversions::CAST_Int_to_M_ACK::_L4 */ _L4;
} outC_CAST_Int_to_M_ACK_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_ACK */
extern void CAST_Int_to_M_ACK_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_int */kcg_int m_ack_int,
  outC_CAST_Int_to_M_ACK_TM_conversions *outC);

extern void CAST_Int_to_M_ACK_reset_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC);

#endif /* _CAST_Int_to_M_ACK_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_ACK_TM_conversions.h
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */


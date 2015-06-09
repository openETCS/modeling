/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */
#ifndef _CAST_Int_to_Q_LINKREACTION_TM_conversions_H_
#define _CAST_Int_to_Q_LINKREACTION_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_LINKREACTION /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ q_linkreaction;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::then::_L3 */ _L3_IfBlock1;
  Q_LINKREACTION /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::then::_L4 */ _L4_IfBlock1;
  Q_LINKREACTION /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::then::_L1 */ _L13_IfBlock1;
  Q_LINKREACTION /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::else::_L1 */ _L14_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::else::_L2 */ _L25_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else */ else_clock_IfBlock1;
  Q_LINKREACTION /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::then::_L3 */ _L32_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_in */ q_linkreaction_in;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_Q_LINKREACTION::_L2 */ _L2;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_LINKREACTION::_L4 */ _L4;
} outC_CAST_Int_to_Q_LINKREACTION_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_Q_LINKREACTION */
extern void CAST_Int_to_Q_LINKREACTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_int */kcg_int q_linkreaction_int,
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC);

extern void CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC);

#endif /* _CAST_Int_to_Q_LINKREACTION_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LINKREACTION_TM_conversions.h
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */


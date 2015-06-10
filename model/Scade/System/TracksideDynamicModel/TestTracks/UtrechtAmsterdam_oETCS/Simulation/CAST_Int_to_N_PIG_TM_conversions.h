/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */
#ifndef _CAST_Int_to_N_PIG_TM_conversions_H_
#define _CAST_Int_to_N_PIG_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ n_pig;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else */ _6_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else */ _5_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::then::_L3 */ _L3_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::then::_L4 */ _L4_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::then::_L1 */ _L18_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::then::_L3 */ _L311_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::then::_L1 */ _L112_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::then::_L3 */ _L315_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::then::_L1 */ _L116_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else */ else_clock_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::else::_L2 */ _L220_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::else::_L3 */ _L319_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::then::_L1 */ _L118_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::then::_L4 */ _L417_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::then::_L2 */ _L214_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::then::_L4 */ _L413_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::then::_L1 */ _L110_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::then::_L3 */ _L39_IfBlock1;
  N_PIG /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::then::_L3 */ _L37_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_N_PIG::n_pig_in */ n_pig_in;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_N_PIG::_L2 */ _L2;
  kcg_bool /* TM_conversions::CAST_Int_to_N_PIG::_L4 */ _L4;
} outC_CAST_Int_to_N_PIG_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_N_PIG */
extern void CAST_Int_to_N_PIG_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig_int */kcg_int n_pig_int,
  outC_CAST_Int_to_N_PIG_TM_conversions *outC);

extern void CAST_Int_to_N_PIG_reset_TM_conversions(
  outC_CAST_Int_to_N_PIG_TM_conversions *outC);

#endif /* _CAST_Int_to_N_PIG_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_N_PIG_TM_conversions.h
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */


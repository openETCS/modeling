/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */
#ifndef _TOOLS_Int_to_N_PIG_H_
#define _TOOLS_Int_to_N_PIG_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  N_PIG /* TOOLS_Int_to_N_PIG::n_pig */ n_pig;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else */ _5_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::then::_L1 */ _L16_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::then::_L1 */ _L18_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::then::_L1 */ _L110_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::_L1 */ _L111_IfBlock1;
  kcg_bool /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else */ else_clock_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else::then::_L2 */ _L29_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::then::_L1 */ _L17_IfBlock1;
  N_PIG /* TOOLS_Int_to_N_PIG::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_int /* TOOLS_Int_to_N_PIG::n_pig_in */ n_pig_in;
  kcg_int /* TOOLS_Int_to_N_PIG::_L2 */ _L2;
} outC_TOOLS_Int_to_N_PIG;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_to_N_PIG */
extern void TOOLS_Int_to_N_PIG(
  /* TOOLS_Int_to_N_PIG::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_N_PIG *outC);

extern void TOOLS_Int_to_N_PIG_reset(outC_TOOLS_Int_to_N_PIG *outC);

#endif /* _TOOLS_Int_to_N_PIG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_N_PIG.h
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */


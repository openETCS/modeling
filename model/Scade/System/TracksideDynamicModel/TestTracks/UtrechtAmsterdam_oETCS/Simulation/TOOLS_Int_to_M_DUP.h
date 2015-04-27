/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */
#ifndef _TOOLS_Int_to_M_DUP_H_
#define _TOOLS_Int_to_M_DUP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_DUP /* TOOLS_Int_to_M_DUP::m_dup */ m_dup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* TOOLS_Int_to_M_DUP::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::then::_L5 */ _L5_IfBlock1;
  M_DUP /* TOOLS_Int_to_M_DUP::IfBlock1::else::else::then::_L4 */ _L43_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::else::else::then::_L3 */ _L3_IfBlock1;
  M_DUP /* TOOLS_Int_to_M_DUP::IfBlock1::else::else::else::_L3 */ _L34_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::else::else::else::_L2 */ _L2_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_bool /* TOOLS_Int_to_M_DUP::IfBlock1::else::then::_L4 */ _L4_IfBlock1;
  M_DUP /* TOOLS_Int_to_M_DUP::IfBlock1::else::then::_L5 */ _L52_IfBlock1;
  kcg_int /* TOOLS_Int_to_M_DUP::m_dup_in */ m_dup_in;
  kcg_int /* TOOLS_Int_to_M_DUP::_L2 */ _L2;
} outC_TOOLS_Int_to_M_DUP;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_to_M_DUP */
extern void TOOLS_Int_to_M_DUP(
  /* TOOLS_Int_to_M_DUP::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_M_DUP *outC);

extern void TOOLS_Int_to_M_DUP_reset(outC_TOOLS_Int_to_M_DUP *outC);

#endif /* _TOOLS_Int_to_M_DUP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_M_DUP.h
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */


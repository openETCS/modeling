/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */
#ifndef _TOOLS_Int_to_Q_UPDOWN_H_
#define _TOOLS_Int_to_Q_UPDOWN_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_UPDOWN /* TOOLS_Int_to_Q_UPDOWN::q_updown */ q_updown;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_Int_to_Q_UPDOWN::_L2 */ _L2;
  Q_UPDOWN /* TOOLS_Int_to_Q_UPDOWN::_L3 */ _L3;
  kcg_bool /* TOOLS_Int_to_Q_UPDOWN::_L19 */ _L19;
  kcg_int /* TOOLS_Int_to_Q_UPDOWN::_L24 */ _L24;
  Q_UPDOWN /* TOOLS_Int_to_Q_UPDOWN::_L25 */ _L25;
  Q_UPDOWN /* TOOLS_Int_to_Q_UPDOWN::_L26 */ _L26;
} outC_TOOLS_Int_to_Q_UPDOWN;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_to_Q_UPDOWN */
extern void TOOLS_Int_to_Q_UPDOWN(
  /* TOOLS_Int_to_Q_UPDOWN::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_Q_UPDOWN *outC);

extern void TOOLS_Int_to_Q_UPDOWN_reset(outC_TOOLS_Int_to_Q_UPDOWN *outC);

#endif /* _TOOLS_Int_to_Q_UPDOWN_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_UPDOWN.h
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */


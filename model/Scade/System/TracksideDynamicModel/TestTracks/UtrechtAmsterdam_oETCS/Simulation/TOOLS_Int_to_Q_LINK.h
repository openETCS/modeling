/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _TOOLS_Int_to_Q_LINK_H_
#define _TOOLS_Int_to_Q_LINK_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_LINK /* TOOLS_Int_to_Q_LINK::QDIR */ QDIR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_Int_to_Q_LINK::_L2 */ _L2;
  Q_LINK /* TOOLS_Int_to_Q_LINK::_L3 */ _L3;
  kcg_bool /* TOOLS_Int_to_Q_LINK::_L4 */ _L4;
  kcg_int /* TOOLS_Int_to_Q_LINK::_L5 */ _L5;
  Q_LINK /* TOOLS_Int_to_Q_LINK::_L6 */ _L6;
  Q_LINK /* TOOLS_Int_to_Q_LINK::_L12 */ _L12;
} outC_TOOLS_Int_to_Q_LINK;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_to_Q_LINK */
extern void TOOLS_Int_to_Q_LINK(
  /* TOOLS_Int_to_Q_LINK::Q_DIR_as_sInt */kcg_int Q_DIR_as_sInt,
  outC_TOOLS_Int_to_Q_LINK *outC);

extern void TOOLS_Int_to_Q_LINK_reset(outC_TOOLS_Int_to_Q_LINK *outC);

#endif /* _TOOLS_Int_to_Q_LINK_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_LINK.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */


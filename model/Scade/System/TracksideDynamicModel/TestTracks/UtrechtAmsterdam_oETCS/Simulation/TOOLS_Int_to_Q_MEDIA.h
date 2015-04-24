/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _TOOLS_Int_to_Q_MEDIA_H_
#define _TOOLS_Int_to_Q_MEDIA_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_MEDIA /* TOOLS_Int_to_Q_MEDIA::q_media */ q_media;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_Int_to_Q_MEDIA::_L2 */ _L2;
  Q_MEDIA /* TOOLS_Int_to_Q_MEDIA::_L3 */ _L3;
  kcg_bool /* TOOLS_Int_to_Q_MEDIA::_L12 */ _L12;
  kcg_int /* TOOLS_Int_to_Q_MEDIA::_L16 */ _L16;
  Q_MEDIA /* TOOLS_Int_to_Q_MEDIA::_L17 */ _L17;
  Q_MEDIA /* TOOLS_Int_to_Q_MEDIA::_L18 */ _L18;
} outC_TOOLS_Int_to_Q_MEDIA;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_to_Q_MEDIA */
extern void TOOLS_Int_to_Q_MEDIA(
  /* TOOLS_Int_to_Q_MEDIA::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_Q_MEDIA *outC);

extern void TOOLS_Int_to_Q_MEDIA_reset(outC_TOOLS_Int_to_Q_MEDIA *outC);

#endif /* _TOOLS_Int_to_Q_MEDIA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_MEDIA.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */


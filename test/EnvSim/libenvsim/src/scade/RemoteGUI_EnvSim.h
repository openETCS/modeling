/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-11T19:12:07
*************************************************************$ */
#ifndef _RemoteGUI_EnvSim_H_
#define _RemoteGUI_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GUI_to_EVC_EnvSim /* EnvSim::RemoteGUI::guiToEVC */ guiToEVC;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteGUI_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteGUI */
extern void RemoteGUI_EnvSim(
  /* EnvSim::RemoteGUI::evcToGUI */ EVC_to_GUI_EnvSim *evcToGUI,
  outC_RemoteGUI_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteGUI_reset_EnvSim(outC_RemoteGUI_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteGUI_init_EnvSim(outC_RemoteGUI_EnvSim *outC);

#endif /* _RemoteGUI_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteGUI_EnvSim.dh
** Generation date: 2015-10-11T19:12:07
*************************************************************$ */


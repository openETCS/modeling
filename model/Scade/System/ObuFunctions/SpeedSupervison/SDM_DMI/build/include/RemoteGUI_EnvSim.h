/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2015-10-23T11:03:30
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

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_RemoteGUI_EnvSim;

extern void kcg_save_SV_RemoteGUI_EnvSim(
  SV_RemoteGUI_EnvSim *SV,
  outC_RemoteGUI_EnvSim *outC);
extern void kcg_load_SV_RemoteGUI_EnvSim(
  outC_RemoteGUI_EnvSim *outC,
  SV_RemoteGUI_EnvSim *SV);

#endif /* _RemoteGUI_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteGUI_EnvSim.dh
** Generation date: 2015-10-23T11:03:30
*************************************************************$ */


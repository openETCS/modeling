/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-11T19:12:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteGUI_EnvSim.h"

extern void es_remote_gui_init(outC_RemoteGUI_EnvSim *out);
extern void es_remote_gui_cycle(EVC_to_GUI_EnvSim *evcToGUI, outC_RemoteGUI_EnvSim *outC);
int RemoteGUI_initialized_EnvSim = 0;

void RemoteGUI_init_EnvSim(outC_RemoteGUI_EnvSim *outC)
{
  es_remote_gui_init(outC);
  RemoteGUI_initialized_EnvSim = 1;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RemoteGUI_reset_EnvSim(outC_RemoteGUI_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::RemoteGUI */
void RemoteGUI_EnvSim(
  /* EnvSim::RemoteGUI::evcToGUI */ EVC_to_GUI_EnvSim *evcToGUI,
  outC_RemoteGUI_EnvSim *outC)
{

  if(! RemoteGUI_initialized_EnvSim) {
    RemoteGUI_init_EnvSim(outC);
  }
  es_remote_gui_cycle(evcToGUI,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteGUI_EnvSim.dc
** Generation date: 2015-10-11T19:12:07
*************************************************************$ */

